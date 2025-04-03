<?php
// browser_detect.php - Detects user's browser
$user_agent = $_SERVER['HTTP_USER_AGENT'];
if (strpos($user_agent, 'Chrome') !== false) {
    echo "You are using Google Chrome.";
} elseif (strpos($user_agent, 'Firefox') !== false) {
    echo "You are using Mozilla Firefox.";
} else {
    echo "Your browser is not recognized.";
}
?>