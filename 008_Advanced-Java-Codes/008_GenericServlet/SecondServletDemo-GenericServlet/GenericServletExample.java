import java.io.*;
import java.net.*;
import java.net.http.*;
import jakarta.servlet.*;

public class GenericServletExample extends GenericServlet {
    private static final long serialVersionUID = 1L;

    // Constructor
    public GenericServletExample1() {
        System.out.println("GenericServlet Constructor Called");
    }

    // Initialization method
    @Override
    public void init(ServletConfig config) throws ServletException {
        super.init(config);
        System.out.println("GenericServlet init() method called");
    }

    // Service method
    @Override
    public void service(ServletRequest request, ServletResponse response) throws ServletException, IOException {
        System.out.println("GenericServlet service() method called");
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();
        out.println("<html><body>");
        out.println("<h2>This is a GenericServlet Example</h2>");
        out.println("<p>Created By : Yash Pandey , 12214802722</p>");
        out.println("</body></html>");
    }

    // Destroy method
    @Override
    public void destroy() {
        System.out.println("GenericServlet destroy() method called");
    }
}
