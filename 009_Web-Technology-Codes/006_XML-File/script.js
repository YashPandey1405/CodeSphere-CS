document.addEventListener("DOMContentLoaded", async function () {
  await loadXML();
});

async function loadXML() {
  try {
    let response = await fetch("students.xml"); // Fetch XML file
    let xmlText = await response.text(); // Convert response to text
    let parser = new DOMParser();
    let xmlDoc = parser.parseFromString(xmlText, "text/xml"); // Parse XML
    displayData(xmlDoc);
  } catch (error) {
    console.error("Error loading XML:", error);
  }
}

function displayData(xml) {
  let table = document.getElementById("studentTable");
  let students = xml.getElementsByTagName("Student");

  for (let student of students) {
    let row = document.createElement("tr");

    let enrolmentCell = document.createElement("td");
    enrolmentCell.textContent =
      student.getElementsByTagName("EnrolmentNumber")[0].textContent;

    let nameCell = document.createElement("td");
    nameCell.textContent = student.getElementsByTagName("Name")[0].textContent;

    let mobileCell = document.createElement("td");
    mobileCell.textContent =
      student.getElementsByTagName("MobileNumber")[0].textContent;

    let emailCell = document.createElement("td");
    emailCell.textContent =
      student.getElementsByTagName("EmailId")[0].textContent;

    row.appendChild(enrolmentCell);
    row.appendChild(nameCell);
    row.appendChild(mobileCell);
    row.appendChild(emailCell);

    table.appendChild(row);
  }
}
