// Get all items with the same class
const themeDisplayItems = document.querySelectorAll(".change-theme");

function toggleTheme() {
  // Get both navbar elements
  const darkNavbar = document.getElementById("dark-navbar");
  const lightNavbar = document.getElementById("light-navbar");
  const darkFooter = document.getElementById("dark-footer");
  const lightFooter = document.getElementById("light-footer");

  // Toggle visibility
  darkNavbar.classList.toggle("d-none");
  lightNavbar.classList.toggle("d-none");

  // Toggle footer visibility
  darkFooter.classList.toggle("d-none");
  lightFooter.classList.toggle("d-none");

  // Check the current background color
  const currentBackgroundTheme = document.body.style.backgroundColor;

  if (!currentBackgroundTheme || currentBackgroundTheme == "white") {
    document.body.style.backgroundColor = "#282828";
    // Change text color for all elements with the class "change-theme"
    themeDisplayItems.forEach((item) => {
      item.style.color = "white";
    });
  } else {
    document.body.style.backgroundColor = "white";
    // Change text color for all elements with the class "change-theme"
    themeDisplayItems.forEach((item) => {
      item.style.color = "black";
    });
  }
}

document.getElementById("reviewForm").addEventListener("submit", (event) => {
  event.preventDefault(); // Prevent the form from submitting and reloading the page

  let name = document.getElementById("name").value;
  let review = document.getElementById("review").value;
  let reviewList = document.getElementById("reviewList");

  // Get the current time
  let now = new Date();
  let timeString = now.toLocaleTimeString([], {
    hour: "2-digit",
    minute: "2-digit",
    second: "2-digit",
  });

  // Create new review element
  let newReview = document.createElement("div");
  newReview.classList.add("p-2", "border-bottom");

  newReview.innerHTML = `<strong>${name}:</strong> <p>${review}</p>
                             <small class="text-muted">Posted at: ${timeString}</small>`;

  // Append the new review
  if (reviewList.querySelector("p.text-muted")) {
    reviewList.innerHTML = ""; // Remove placeholder text
  }
  reviewList.appendChild(newReview);

  // Clear form fields
  document.getElementById("name").value = "";
  document.getElementById("review").value = "";
});
