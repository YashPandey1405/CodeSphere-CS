<?php
session_start();
if (isset($_SESSION["user_id"])) {
    header("Location: dashboard.php");
    exit();
}
?>
<!DOCTYPE html>
<html>
<head>
    <title>TPMS - Home</title>
</head>
<body>
    <h2>Welcome to Training & Placement Management System</h2>
    <a href="login.php">Login</a> | <a href="register.php">Register</a>
</body>
</html>
