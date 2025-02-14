document.getElementById("personalForm").addEventListener("submit", function(event) {
    event.preventDefault(); // Prevent form from submitting

    // Get the values from the form fields
    const name = document.getElementById("name").value;
    const email = document.getElementById("email").value;
    const mobile = document.getElementById("mobile").value;
    const gender = document.querySelector('input[name="gender"]:checked');
    const color = document.getElementById("color").value;

    // Validate form fields
    if (!name || !email || !mobile || !gender || !color) {
        alert("Please fill out all fields!");
        return;
    }

    // Combine the information into a string
    const genderValue = gender ? gender.value : "";
    const resultText = `
        Name: ${name}
        Email: ${email}
        Mobile No: ${mobile}
        Gender: ${genderValue}
        Favourite Colour: ${color}
    `;

    // Display the result in the textarea
    document.getElementById("result").value = resultText;
});
