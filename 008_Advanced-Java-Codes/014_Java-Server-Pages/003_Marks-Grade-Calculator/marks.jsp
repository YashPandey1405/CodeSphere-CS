<%@ page language="java" contentType="text/html; charset=UTF-8" %>
<html>
  <head>
    <title>Student Marks Entry</title>
  </head>

  <body>
    <h2>Enter Marks for 5 Subjects</h2>
    <form action="result.jsp" method="post">
      Advanced Java Progg.: <input type="text" name="mark1" /><br /><br />
      Progg. In Python: <input type="text" name="mark2" /><br /><br />
      Web Tech.: <input type="text" name="mark3" /><br /><br />
      Artificial Intelligence: <input type="text" name="mark4" /><br /><br />
      Statistics: <input type="text" name="mark5" /><br /><br />
      Principle Of Management: <input type="text" name="mark6" /><br /><br />
      <input type="submit" value="Calculate" />
    </form>
  </body>
</html>
