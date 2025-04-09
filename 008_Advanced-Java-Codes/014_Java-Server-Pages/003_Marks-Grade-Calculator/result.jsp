<%@ page import="beans.MarksBean" %>
<jsp:useBean id="student" class="beans.MarksBean" scope="request" />
<jsp:setProperty name="student" property="mark1" param="mark1" />
<jsp:setProperty name="student" property="mark2" param="mark2" />
<jsp:setProperty name="student" property="mark3" param="mark3" />
<jsp:setProperty name="student" property="mark4" param="mark4" />
<jsp:setProperty name="student" property="mark5" param="mark5" />
<jsp:setProperty name="student" property="mark5" param="mark6" />

<html>
  <head>
    <title>Student Result</title>
  </head>

  <body>
    <h2>Result Summary</h2>
    <p>Total Marks: <%= student.getTotal() %></p>
    <p>Average Marks: <%= student.getAverage() %></p>
    <p>Grade: <strong> <%= student.getGrade() %> </strong></p>
    <br />
    <a href="marks.jsp">Enter Again</a>
  </body>
</html>
