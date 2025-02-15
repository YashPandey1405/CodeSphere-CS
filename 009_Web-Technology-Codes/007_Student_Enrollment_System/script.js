function validateForm() {
  var email = document.getElementById("email").value;
  var regex = /^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,6}$/;
  if (!regex.test(email)) {
    alert("Please enter a valid email address.");
    return false;
  }
  alert("Enrollment Successful!");
  return true;
}

function showAdditionalFields() {
  var course = document.getElementById("course").value;
  var additionalFields = document.getElementById("additional-fields");

  if (course === "web-tech") {
    additionalFields.innerHTML =
      "<label for='skills'>Skills:</label>" +
      "<input type='text' id='skills' name='skills' placeholder='e.g., HTML, CSS' required>";
  } else if (course === "js-tech") {
    additionalFields.innerHTML =
      "<label for='experience'>Experience:</label>" +
      "<input type='text' id='experience' name='experience' placeholder='e.g., JavaScript knowledge' required>";
  } else {
    additionalFields.innerHTML = "";
  }
}

function loadCourses() {
  var xhr = new XMLHttpRequest();
  xhr.open("GET", "courses.xml", true);
  xhr.onreadystatechange = function () {
    if (xhr.readyState == 4 && xhr.status == 200) {
      var xmlDoc = xhr.responseXML;
      var courses = xmlDoc.getElementsByTagName("course");
      var courseTable =
        "<table><tr><th>Name</th><th>Code</th><th>Duration</th><th>Eligibility</th><th>Fees</th></tr>";

      for (var i = 0; i < courses.length; i++) {
        courseTable += "<tr>";
        courseTable +=
          "<td>" +
          courses[i].getElementsByTagName("name")[0].childNodes[0].nodeValue +
          "</td>";
        courseTable +=
          "<td>" +
          courses[i].getElementsByTagName("code")[0].childNodes[0].nodeValue +
          "</td>";
        courseTable +=
          "<td>" +
          courses[i].getElementsByTagName("duration")[0].childNodes[0]
            .nodeValue +
          "</td>";
        courseTable +=
          "<td>" +
          courses[i].getElementsByTagName("eligibility")[0].childNodes[0]
            .nodeValue +
          "</td>";
        courseTable +=
          "<td>" +
          courses[i].getElementsByTagName("fees")[0].childNodes[0].nodeValue +
          "</td>";
        courseTable += "</tr>";
      }

      courseTable += "</table>";
      document.getElementById("course-list").innerHTML = courseTable;
    }
  };
  xhr.send();
}

window.onload = loadCourses;
