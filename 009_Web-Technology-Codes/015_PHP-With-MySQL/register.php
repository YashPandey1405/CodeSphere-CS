<?php
$servername = "localhost";
$username = "root"; // Change if needed
$password = ""; // Change if needed
$dbname = "user_db";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Get user input
$name = $_POST['name'];
$address = $_POST['address'];
$email = $_POST['email'];
$mobile = $_POST['mobile'];

// Insert into database
$sql = "INSERT INTO users (name, address, email, mobile) VALUES ('$name', '$address', '$email', '$mobile')";

if ($conn->query($sql) === TRUE) {
    echo "User Registered Successfully! <br>";
    echo "<a href='display.php'>View Users</a>";
} else {
    echo "Error: " . $conn->error;
}

$conn->close();
?>
