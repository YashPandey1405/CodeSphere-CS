package com.mycompany.mavenproject2;

import java.io.IOException;
import java.io.PrintWriter;
import jakarta.servlet.ServletException;
import jakarta.servlet.http.Cookie;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

public class GetCookiesServlet extends HttpServlet {
    protected void doGet(HttpServletRequest request, HttpServletResponse response) 
            throws ServletException, IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();

        // Generating Response
        out.println("<!DOCTYPE html>");
        out.println("<html><head><title>Get Cookies Servlet</title></head><body>");
        out.println("<h2>Cookies Information</h2>");

        // Retrieving all cookies
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
