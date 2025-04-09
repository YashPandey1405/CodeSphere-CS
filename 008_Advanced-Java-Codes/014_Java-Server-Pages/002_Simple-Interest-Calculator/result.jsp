<%@ page import="beans.InterestBean" %>
<jsp:useBean id="interest" class="beans.InterestBean" scope="request" />
<jsp:setProperty name="interest" property="principal" param="principal" />
<jsp:setProperty name="interest" property="rate" param="rate" />
<jsp:setProperty name="interest" property="time" param="time" />

<html>
  <head>
    <title>Interest Result</title>
  </head>
  <body>
    <h2>Calculation Result</h2>
    <% double si = interest.calculateInterest(); %>
    <p>Principal: <%= interest.getPrincipal() %></p>
    <p>Rate: <%= interest.getRate() %>%</p>
    <p>Time: <%= interest.getTime() %> years</p>
    <hr />
    <p><strong>Simple Interest: <%= si %></strong></p>
    <br />
    <a href="interest.jsp">Calculate Again</a>
  </body>
</html>
