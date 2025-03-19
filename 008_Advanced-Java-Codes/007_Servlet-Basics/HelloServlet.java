import java.io.*;
import java.net.*;
import java.net.http.*;
import jakarta.servlet.*;

// Annotation-based servlet mapping
@WebServlet("/hello")
public class HelloServlet extends HttpServlet {
    private static final long serialVersionUID = 1L;

    // Handles GET requests
    protected void doGet(HttpServletRequest request, HttpServletResponse response) 
            throws ServletException, IOException {
        response.setContentType("text/html"); // Set response content type
        PrintWriter out = response.getWriter(); // Get output writer
        out.println("<!DOCTYPE html>");
        out.println("<html lang='en'>");
        out.println("<head>");
        out.println("    <meta charset='UTF-8'>");
        out.println("    <meta name='viewport' content='width=device-width, initial-scale=1.0'>");
        out.println("    <title>Document</title>");
        out.println("</head>");
        out.println("<body>");
        out.println("    <h2>Hello, World! Welcome to Servlet Programming.</h2>");
        out.println("    <p>Created By : Yash Pandey , 12214802722</p>");
        out.println("</body>");
        out.println("</html>");
    }
}
