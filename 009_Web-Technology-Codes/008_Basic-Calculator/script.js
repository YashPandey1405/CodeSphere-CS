// alert("Working Well");

const inputFormTextArea = document.getElementById("Text-Field");

function AddNumber(num) {
  let currentText = inputFormTextArea.value;
  inputFormTextArea.value = currentText + num;
}

function ClearText() {
  inputFormTextArea.value = "";
}

function ClearLastCharacter() {
  let currentText = inputFormTextArea.value;
  inputFormTextArea.value = currentText.slice(0, -1);
}

function Evaluate() {
  let currentText = inputFormTextArea.value;
  let output = evaluateExpression(currentText);
  inputFormTextArea.value = output;
}

function SquareValue() {
  let currentText = inputFormTextArea.value;
  let output = evaluateExpression(currentText);
  output = evaluateExpression(output * output);
  inputFormTextArea.value = output;
}

function evaluateExpression(expression) {
  try {
    // Using eval to evaluate the arithmetic expression
    let result = eval(expression);

    // Round off to 3 decimal places and return as a string
    return result.toFixed(3);
  } catch (error) {
    // Return an error message if the expression is invalid
    return "Error in expression";
  }
}

// // Example usage:
// let input = "9*8/7+6-5+400";
// alert(output);
// console.log(output); // Should return 411.286
