import java.io.*;
import java.net.*;
import java.util.*;

public class ChatServer {

    // List to hold all connected client handlers
    private static final List<ClientHandler> clients = new ArrayList<>();

    public static void main(String[] args) {
        int port = 12345; // The server port

        try (ServerSocket serverSocket = new ServerSocket(port)) {
            System.out.println("Chat Server started on port " + port);

            // Continuously accept client connections
            while (true) {
                Socket clientSocket = serverSocket.accept();
                System.out.println("New client connected: " + clientSocket.getInetAddress());

                // Create a new client handler to manage the client's messages
                ClientHandler clientHandler = new ClientHandler(clientSocket);
                clients.add(clientHandler);

                // Start a new thread for the client
                new Thread(clientHandler).start();
            }

        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    // Method to broadcast messages to all clients
    public static void broadcastMessage(String message, ClientHandler sender) {
        for (ClientHandler client : clients) {
            // Don't send the message to the sender
            if (client != sender) {
                client.sendMessage(message);
            }
        }
    }

    // Inner class to handle each client's communication
    private static class ClientHandler implements Runnable {
        private Socket socket;
        private PrintWriter out;
        private BufferedReader in;
        private String clientName;

        public ClientHandler(Socket socket) {
            this.socket = socket;
            try {
                // Setup input and output streams
                in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
                out = new PrintWriter(socket.getOutputStream(), true);

                // Get the client's name
                out.println("Enter your name: ");
                clientName = in.readLine();
                out.println("Welcome to the chat, " + clientName + "!");

            } catch (IOException e) {
                e.printStackTrace();
            }
        }

        // Method to send message to the client
        public void sendMessage(String message) {
            out.println(message);
        }

        @Override
        public void run() {
            String message;
            try {
                while ((message = in.readLine()) != null) {
                    if (message.equalsIgnoreCase("exit")) {
                        break;
                    }

                    // Broadcast the message to all clients
                    System.out.println(clientName + ": " + message);
                    ChatServer.broadcastMessage(clientName + ": " + message, this);
                }

            } catch (IOException e) {
                e.printStackTrace();

            } finally {
                try {
                    // Remove the client from the list of active clients
                    clients.remove(this);
                    socket.close();
                    System.out.println(clientName + " has disconnected.");

                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        }
    }
}
