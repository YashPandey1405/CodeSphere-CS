<%@ page language="java" contentType="text/html; charset=UTF-8"
pageEncoding="UTF-8"%>
<html>
  <head>
    <title>Login</title>
  </head>
  <body>
    <% String user = (String) session.getAttribute("user"); if
    (request.getParameter("logout") != null) { session.invalidate();
    response.sendRedirect("login.jsp"); } if (user == null &&
    request.getParameter("username") != null) { if
    ("admin".equals(request.getParameter("username")) &&
    "password123".equals(request.getParameter("password"))) {
    session.setAttribute("user", "admin"); response.sendRedirect("catalog.jsp");
    } else { out.println("
    <h3>Invalid Login</h3>
    "); } } %> <% if (session.getAttribute("user") == null) { %>
    <h2>Login</h2>
    <form method="post">
      Username: <input type="text" name="username" required /> Password:
      <input type="password" name="password" required />
      <input type="submit" value="Login" />
    </form>
    <% } else { %>
    <h2>Welcome, <%= user %>!</h2>
    <a href="?logout=true">Logout</a>
    <br /><a href="catalog.jsp">Go to Product Catalog</a>
    <% } %>
  </body>
</html>
