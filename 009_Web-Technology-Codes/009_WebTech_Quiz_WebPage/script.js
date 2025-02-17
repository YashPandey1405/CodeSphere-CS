const inputFormDetais = document.getElementById("form-input");
const quizHeader = document.getElementById("quiz-header");
const quizScore = document.getElementById("quiz-score");
const quizIncorrect = document.getElementById("quiz-incorrect");

let userName = "John";
let incorrectAnswers = "";

// For Score Evaluation....
document.getElementById("submitQuiz").addEventListener("click", function (e) {
  e.preventDefault(); // Prevent form submission

  let score = 0; // Initialize score

  // Define correct answers for each question
  const answers = {
    q1: "1", // <a> tag
    q2: "1", // background-color property
    q3: "2", // id attribute identifies a unique element
    q4: "2", // // comment in JavaScript
    q5: "1", // <p> tag for paragraph
    q6: "2", // div default display value is block
    q7: "1", // <link> tag to link CSS file
    q8: "2", // <img> tag to insert an image
    q9: "1", // class attribute links to a CSS style
    q10: "1", // color property to change text color
    q11: "2", // document.querySelector('.example') for class
    q12: "2", // onclick event triggered when button is clicked
  };

  // Check answers for each question
  for (let i = 1; i <= 12; i++) {
    const userAnswer = document.querySelector(`input[name="q${i}"]:checked`);
    if (userAnswer && userAnswer.value === answers[`q${i}`]) {
      score++;
    } else {
      incorrectAnswers += `Question ${i}: You answered ${
        userAnswer.value
      }, but the correct answer is ${answers[`q${i}`]}.\n`;
    }
  }

  // Display the score
  alert(`Hi ${userName} , You're score is ${score}/12`);

  quizScore.innerText = `You're Incorrect Solutions Are :-`;
  quizIncorrect.innerText = incorrectAnswers;
});

// To Set The Data Received From The User Details Form.....
inputFormDetais.addEventListener("submit", () => {
  event.preventDefault();

  const firstName = document.getElementById("firstName").value;
  const lastName = document.getElementById("lastName").value;
  const email = document.getElementById("Email").value;
  const number = document.getElementById("Number").value;

  userName = `${firstName} ${lastName}`;

  const message = `Hi ${firstName} ${lastName},\nYou're Email Is '${email}'\nYou're Number Is ${number}`;
  alert(message);

  const quizDiv = document.getElementById("quiz");
  quizDiv.style.display = "block";

  quizHeader.innerText = `Hi ${userName} , Test Your Web Technology Knowledge`;
});
