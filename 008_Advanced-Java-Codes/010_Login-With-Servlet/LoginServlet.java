import java.io.*;
import java.net.*;
import jakarta.servlet.*;
import jakarta.servlet.http.*;

@WebServlet(name = "LoginServlet", urlPatterns = {"/LoginServlet"})
public class LoginServlet extends HttpServlet {
    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        String username = request.getParameter("username");
        String password = request.getParameter("password");

        try (PrintWriter out = response.getWriter()) {
            out.println("<!DOCTYPE html>");
            out.println("<html><head><title>Login</title></head><body>");
            if ("admin".equals(username) && "password123".equals(password)) {
                out.println("<h2>Login Successful</h2>");
            } else {
                out.println("<h2>Invalid Credentials</h2>");
            }
            out.println("</body></html>");
        }
    }
}
