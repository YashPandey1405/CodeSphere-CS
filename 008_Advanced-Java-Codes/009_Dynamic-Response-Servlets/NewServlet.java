import java.io.*;
import java.net.*;
import jakarta.servlet.*;
import jakarta.servlet.http.*;

@WebServlet(name = "NewServlet", urlPatterns = {"/NewServlet"})
public class NewServlet extends HttpServlet {
    protected void processRequest(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        
        String name = request.getParameter("name");
        String age = request.getParameter("age");

        try (PrintWriter out = response.getWriter()) {
            out.println("<!DOCTYPE html>");
            out.println("<html><head><title>Dynamic Response</title></head><body>");
            if (name != null && age != null) {
                out.println("<h1>Hello, " + name + "! You are " + age + " years old.</h1>");
            } else {
                out.println("<h1>Missing parameters! Please provide name and age.</h1>");
            }
            out.println("</body></html>");
        }
    }

    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }
}
