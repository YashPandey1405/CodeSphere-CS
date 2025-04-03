<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<html>
<head><title>Cart</title></head>
<body>

<h2>Your Cart</h2>

<%
    java.util.List<String> cart = (java.util.List<String>) session.getAttribute("cart");
    if (cart == null) { cart = new java.util.ArrayList<>(); session.setAttribute("cart", cart); }
    if (request.getParameter("addToCart") != null) { cart.add(request.getParameter("product")); }
%>

<ul>
    <% for (String item : cart) { %>
        <li><%= item %></li>
    <% } %>
</ul>

<form method="post">
    Name: <input type="text" name="name" required>
    <input type="submit" name="checkout" value="Checkout">
</form>

<% if (request.getParameter("checkout") != null) { %>
    <h2>Order Placed! Thank you, <%= request.getParameter("name") %>!</h2>
    <% session.removeAttribute("cart"); %>
<% } %>

<a href="catalog.jsp">Back to Catalog</a>

</body>
</html>
