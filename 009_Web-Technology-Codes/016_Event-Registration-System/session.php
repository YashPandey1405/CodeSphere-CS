<?php
// session.php - Starts and manages user session
session_start();
if (isset($_SESSION['user'])) {
    echo "Welcome back, " . $_SESSION['user'] . "! You registered for " . $_SESSION['event'];
} else {
    echo "No active session found.";
}
?>