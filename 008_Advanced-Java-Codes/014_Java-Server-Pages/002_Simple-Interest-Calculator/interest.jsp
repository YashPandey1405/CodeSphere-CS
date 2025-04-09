<%@ page language="java" contentType="text/html; charset=UTF-8" %>
<html>
  <head>
    <title>Simple Interest Calculator</title>
  </head>

  <body>
    <h2>Enter Details to Calculate Simple Interest</h2>
    <form action="result.jsp" method="post">
      Principal: <input type="text" name="principal" /><br /><br />
      Rate (%): <input type="text" name="rate" /><br /><br />
      Time (years): <input type="text" name="time" /><br /><br />
      <input type="submit" value="Calculate Interest" />
    </form>
  </body>
</html>
