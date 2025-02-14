// Function to check if the number is odd or even
function checkOddOrEven() {
  // Get the number entered by the user
  var number = parseInt(document.getElementById("numberInput").value);

  // Validate the input - Check if it's a valid number
  if (isNaN(number)) {
    document.getElementById("result").innerHTML =
      "Please enter a valid number.";
  } else {
    // Check if the number is even or odd
    if (number % 2 === 0) {
      document.getElementById("result").innerHTML =
        "The number " + number + " is EVEN.";
    } else {
      document.getElementById("result").innerHTML =
        "The number " + number + " is ODD.";
    }
  }
}
