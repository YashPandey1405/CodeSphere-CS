const loginForm = document.getElementById("login-Form");
const postLoginRegistrationForm = document.getElementById("registration-Form");
const preloginData = document.getElementById("pre-login");
const postloginData = document.getElementById("post-login");
const userWelcomeHeading = document.getElementById("user-welcome");
const toggle = document.getElementById("togglePassword");
const passwordInput = document.getElementById("loginPassword");
const tableBody = document.querySelector(".table tbody"); // Find table body

document.addEventListener("DOMContentLoaded", function () {
  // Check if localStorage has any data on page load
  if (localStorage.length == 0) {
    // Filling An Sample Data On The Table....
    const user = {
      name: "Yash Pandey",
      email: "pandeyyash041@gmail.com",
      address: "Sector-4 Rohini Delhi",
      dob: "29-07-2003",
      age: 21,
      marks: 94.2,
    };
    localStorage.setItem("Yash Pandey", JSON.stringify(user));
    return;
  }

  let userName = localStorage.getItem("userName");
  let email = localStorage.getItem("email");
  let password = localStorage.getItem("password");

  if (userName && email && password) {
    toggleForms(userName); // Call the function to toggle forms
  }

  // Collect all users' data
  const usersData = [];

  for (let i = 0; i < localStorage.length; i++) {
    const key = localStorage.key(i);

    // Skip the keys that you don't want to process
    if (key === "userName" || key === "email" || key === "password") {
      continue;
    }

    // Get the value and parse it into an object & Add it to usersData array
    const value = localStorage.getItem(key);
    const parsedUser = JSON.parse(value);
    usersData.push(parsedUser);
  }

  // Sort usersData by marks in descending order
  usersData.sort((a, b) => b.marks - a.marks);
  usersData.forEach((user) => {
    addDataInTable(
      user.name,
      user.email,
      user.address,
      user.dob,
      user.age,
      user.marks
    );
  });
});

// Function to add data in the table.....
function addDataInTable(name, email, address, dob, age, percentage) {
  // Create a new row
  const newRow = document.createElement("tr");

  // Create and append all cells
  const rowData = [name, email, address, dob, age, percentage.toFixed(2)];

  rowData.forEach((data) => {
    const td = document.createElement("td");
    td.textContent = data;
    newRow.appendChild(td);
  });

  // Append the row to the table body
  tableBody.appendChild(newRow);
}

// Function to toggle between pre-login and post-login forms.....
function toggleForms(userName) {
  preloginData.classList.add("d-none");
  postloginData.classList.remove("d-none");

  userWelcomeHeading.textContent = `Welcome, '${userName}' !`;
}

// Event listener for the password toggle button.....
toggle.addEventListener("click", () => {
  const type = passwordInput.type === "password" ? "text" : "password";
  passwordInput.type = type;

  // Optional: change the eye icon
  toggle.textContent = type === "password" ? "👁️" : "🙈";
});

// Event listener for the login form submission.....
loginForm.addEventListener("submit", (e) => {
  e.preventDefault(); // Prevent page reload
  let tempUserName = document.getElementById("loginUserName").value;
  let tempEmail = document.getElementById("loginEmail").value;
  let tempPassword = document.getElementById("loginPassword").value;

  if (tempUserName === "" || tempEmail === "" || tempPassword === "") {
    alert("Please fill in all fields.");
    return;
  } else if (tempPassword.length < 8) {
    alert("Password must be at least 8 characters long.");
    return;
  }

  localStorage.setItem("userName", tempUserName);
  localStorage.setItem("email", tempEmail);
  localStorage.setItem("password", tempPassword);

  window.location.reload();
});

// Event listener for the Registration form submission.....
postLoginRegistrationForm.addEventListener("submit", function (e) {
  e.preventDefault(); // Prevent page reload

  // Collect data
  const name = document.getElementById("StudentName").value;
  const email = document.getElementById("StudentEmail").value;
  const address = document.getElementById("StudentAddress").value;
  const dob = document.getElementById("StudentDOB").value;
  const age = document.getElementById("StudentAge").value;

  const marks = [
    Number(document.getElementById("StudentMarks1").value),
    Number(document.getElementById("StudentMarks2").value),
    Number(document.getElementById("StudentMarks3").value),
    Number(document.getElementById("StudentMarks4").value),
    Number(document.getElementById("StudentMarks5").value),
  ];

  if (
    name === "" ||
    email === "" ||
    address === "" ||
    dob === "" ||
    age === ""
  ) {
    alert("Please fill in all fields.");
    return;
  } else if (marks.some((mark) => mark < 0 || mark > 100)) {
    alert("Marks must be between 0 and 100.");
    return;
  }

  // Calculate total and percentage
  const totalMarks = marks.reduce((sum, val) => sum + val, 0);
  const percentage = (totalMarks / (marks.length * 100)) * 100;

  const user = {
    name: name,
    email: email,
    address: address,
    dob: dob,
    age: age,
    marks: percentage,
  };
  localStorage.setItem(name, JSON.stringify(user));

  // Optional: Reset form
  postLoginRegistrationForm.reset();
  window.location.reload();
});

// Event listener for the Theme Toggler.....
document.getElementById("themeToggle").addEventListener("click", function () {
  let htmlElement = document.documentElement; // Select <html> tag
  let themeIcon = document.getElementById("themeIcon"); // Icon inside button
  let lightFooter = document.querySelector(".footer.bg-light"); // Light theme footer
  let darkFooter = document.querySelector(".footer.bg-dark"); // Dark theme footer

  if (htmlElement.getAttribute("data-bs-theme") === "dark") {
    htmlElement.setAttribute("data-bs-theme", "light");
    this.classList.replace("btn-outline-light", "btn-outline-dark"); // Change button style
    themeIcon.classList.replace("fa-sun", "fa-moon"); // Switch icon to Moon

    // Toggle footer visibility
    lightFooter.classList.remove("d-none");
    darkFooter.classList.add("d-none");
  } else {
    htmlElement.setAttribute("data-bs-theme", "dark");
    this.classList.replace("btn-outline-dark", "btn-outline-light"); // Change button style
    themeIcon.classList.replace("fa-moon", "fa-sun"); // Switch icon to Sun

    // Toggle footer visibility
    darkFooter.classList.remove("d-none");
    lightFooter.classList.add("d-none");
  }
});
