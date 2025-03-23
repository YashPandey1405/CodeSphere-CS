<?php
session_start();

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $username = trim($_POST["username"]);
    $password = trim($_POST["password"]);
    $file = "users.txt";

    if (file_exists($file)) {
        $users = file($file, FILE_IGNORE_NEW_LINES | FILE_SKIP_EMPTY_LINES);
        foreach ($users as $user) {
            list($storedUser, $storedPass) = explode(":", $user);
            if ($username === trim($storedUser) && $password === trim($storedPass)) {
                $_SESSION["username"] = $username;
                header("Location: welcome.php");
                exit;
            }
        }
    }
    echo "<script>alert('Invalid Username or Password!'); window.location.href='index.html';</script>";
}
?>
