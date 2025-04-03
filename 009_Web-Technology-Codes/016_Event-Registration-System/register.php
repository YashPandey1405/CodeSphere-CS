<?php
// register.php - Handles form submission & validation
session_start();
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $name = $_POST['fullname'];
    $email = $_POST['email'];
    $phone = $_POST['phone'];
    $event = $_POST['event'];
    $age = $_POST['age'];

    if (empty($name) || empty($email) || empty($phone) || empty($age)) {
        echo "All fields are required!";
    } else {
        $_SESSION['user'] = $name;
        $_SESSION['event'] = $event;
        header("Location: success.php");
        exit();
    }
}
?>