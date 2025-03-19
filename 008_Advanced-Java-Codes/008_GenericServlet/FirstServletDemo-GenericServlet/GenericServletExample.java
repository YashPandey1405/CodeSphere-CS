import java.io.*;
import java.net.*;
import java.net.http.*;
import jakarta.servlet.*;

public class GenericServletExample extends GenericServlet {
    private static final long serialVersionUID = 1L;

    @Override
    public void service(ServletRequest request, ServletResponse response) throws ServletException, IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();
        out.println("<html><body>");
        out.println("<h2>Hello, World! Welcome to Servlet Programming.</h2>");
        out.println("<p>Created By : Yash Pandey , 12214802722</p>");
        out.println("</body></html>");
    }
}
