<%@ page import="beans.LoginBean" %>
<jsp:useBean id="login" class="beans.LoginBean" scope="request" />
<jsp:setProperty name="login" property="username" param="username" />
<jsp:setProperty name="login" property="password" param="password" />

<html>
<head>
    <title>Login Result</title>
</head>
<body>
    <%
        if (login.validate()) {
    %>
        <h2>Welcome, <%= login.getUsername() %>!</h2>
    <%
        } else {
    %>
        <h2>Invalid credentials. Please try again.</h2>
        <a href="login.jsp">Go back to login</a>
    <%
        }
    %>
</body>
</html>
