package com.mycompany.mavenproject2;

import java.io.*;
import java.net.*;
import jakarta.servlet.*;
import jakarta.servlet.http.*;

public class CookieServlet extends HttpServlet {
    protected void doGet(HttpServletRequest request, HttpServletResponse response) 
            throws ServletException, IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();

        // Creating cookies
        Cookie userCookie = new Cookie("username", "JohnDoe");
        userCookie.setMaxAge(60 * 60 * 24); // Expires in 1 day
        response.addCookie(userCookie);

        Cookie sessionCookie = new Cookie("sessionID", "123456");
        response.addCookie(sessionCookie);

        // Generating Response
        out.println("<!DOCTYPE html>");
        out.println("<html><head><title>Cookie Servlet</title></head><body>");
        out.println("<h2>Cookies Created</h2>");
        out.println("<p>Username: JohnDoe</p>");
        out.println("<p>SessionID: 123456</p>");
        out.println("<hr>");

        // Retrieving and displaying all cookies
        out.println("<h2>Cookies Information</h2>");
        Cookie[] cookies = request.getCookies();
        if (cookies != null) {
            for (Cookie cookie : cookies) {
                out.println("<p>Cookie Name: " + cookie.getName() + "</p>");
                out.println("<p>Cookie Value: " + cookie.getValue() + "</p>");
                out.println("<hr>");
            }
        } else {
            out.println("<p>No cookies found</p>");
        }
        out.println("</body></html>");
    }
}
