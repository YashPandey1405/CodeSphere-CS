import java.io.*;
import java.net.*;

public class ChatClient {

    private static PrintWriter out;
    private static BufferedReader in;
    private static BufferedReader userInput;

    public static void main(String[] args) {
        String serverAddress = "localhost"; // The server address (localhost for local testing)
        int port = 12345; // The port used by the server

        try (Socket socket = new Socket(serverAddress, port)) {
            // Setup input and output streams
            in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            out = new PrintWriter(socket.getOutputStream(), true);
            userInput = new BufferedReader(new InputStreamReader(System.in));

            // Read welcome message from server and prompt for name
            System.out.println(in.readLine()); // "Enter your name:"
            out.println(userInput.readLine()); // Send name to server

            // Start a thread to listen for incoming messages from the server
            new Thread(new ServerListener()).start();

            // Main loop to send user input to the server
            String message;
            while (true) {
                message = userInput.readLine();
                out.println(message);
                if (message.equalsIgnoreCase("exit")) {
                    break; // Exit loop if user types "exit"
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    // Inner class to listen for messages from the server
    private static class ServerListener implements Runnable {
        @Override
        public void run() {
            String message;
            try {
                while ((message = in.readLine()) != null) {
                    System.out.println(message); // Print server messages to console
                }
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
}
