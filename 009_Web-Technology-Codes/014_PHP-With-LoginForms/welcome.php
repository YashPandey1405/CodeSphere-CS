<?php
session_start();
if (!isset($_SESSION["username"])) {
    header("Location: index.html");
    exit;
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Welcome</title>
    <style>
        body { font-family: Arial, sans-serif; text-align: center; margin-top: 100px; }
    </style>
</head>
<body>
    <h2>Welcome, <?php echo htmlspecialchars($_SESSION["username"]); ?>!</h2>
    <a href="logout.php">Logout</a>
</body>
</html>
