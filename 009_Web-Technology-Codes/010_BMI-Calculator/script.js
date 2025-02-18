// alert("Working Well");
const formInputText = document.getElementById("form-input");
const displayHeaderLine = document.getElementById("display-score");

function BMI_calculator(height, weight) {
  height = height / 100; // Convert cm to meters
  let bmi = weight / (height * height);

  // Rounds BMI to 2 decimal places
  return bmi.toFixed(2);
}

formInputText.addEventListener("submit", () => {
  event.preventDefault();

  const Name = document.getElementById("Name").value;
  const Email = document.getElementById("email").value;
  const Age = document.getElementById("age").value;
  const Height = document.getElementById("height").value;
  const Weight = document.getElementById("weight").value;

  const bmi = BMI_calculator(Height, Weight); // Corrected variable names to match

  let message = ""; // Changed to let for reassignment
  let color = ""; // Changed to let for reassignment

  if (bmi < 18.5) {
    message = `Hi ${Name}, Your BMI is ${bmi}. You are considered Underweight.`;
    color = "#007bff"; // Blue (calm tone for underweight)
  } else if (bmi >= 18.5 && bmi < 25) {
    message = `Hi ${Name}, Your BMI is ${bmi}. You have a Normal Weight.`;
    color = "#28a745"; // Green (healthy, positive message)
  } else if (bmi >= 25 && bmi < 30) {
    message = `Hi ${Name}, Your BMI is ${bmi}. You are Overweight.`;
    color = "#ff9800"; // Yellow/Orange (warning tone for overweight)
  } else {
    message = `Hi ${Name}, Your BMI is ${bmi}. You are in the Obesity range.`;
    color = "#dc3545"; // Red (alert tone for obesity)
  }

  displayHeaderLine.innerText = message;
  displayHeaderLine.style.color = color;
  displayHeaderLine.style.fontWeight = "bold"; // Added bold text for emphasis
  displayHeaderLine.style.fontSize = "20px"; // Slightly larger text for visibility
});
