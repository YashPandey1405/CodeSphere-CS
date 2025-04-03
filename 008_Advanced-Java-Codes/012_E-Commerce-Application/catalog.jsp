<%@ page language="java" contentType="text/html; charset=UTF-8"
pageEncoding="UTF-8"%> <%@ taglib prefix="custom" uri="discount.tld" %>
<html>
  <head>
    <title>Product Catalog</title>
  </head>
  <body>
    <h2>Product Catalog</h2>
    <%! String[][] products = {{"Laptop", "1000"}, {"Phone", "500"}}; %>

    <form method="post" action="cart.jsp">
      <select name="product">
        <% for (String[] product : products) { %>
        <option value="<%= product[0] %>">
          <%= product[0] %> - $<custom:discount price="<%= product[1] %>" />
        </option>
        <% } %>
      </select>
      <input type="submit" name="addToCart" value="Add to Cart" />
    </form>

    <a href="cart.jsp">View Cart</a> |
    <a href="login.jsp?logout=true">Logout</a>
  </body>
</html>
