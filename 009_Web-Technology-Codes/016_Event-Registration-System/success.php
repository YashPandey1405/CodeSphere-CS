<?php
// success.php - Displays registration success message
session_start();
if (!isset($_SESSION['user'])) {
    header("Location: index.php");
    exit();
}
?>
<!DOCTYPE html>
<html>
<head>
    <title>Registration Successful</title>
</head>
<body>
    <h2>Thank you, <?php echo $_SESSION['user']; ?>!</h2>
    <p>You have successfully registered for: <?php echo $_SESSION['event']; ?></p>
    <a href="index.php">Go Back</a>
</body>
</html>