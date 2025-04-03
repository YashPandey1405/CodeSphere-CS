<?php
// view_registrations.php - Displays stored registrations
echo "<h2>Registered Users</h2>";
$file = "registrations.txt";
if (file_exists($file)) {
    $data = file_get_contents($file);
    echo nl2br($data);
} else {
    echo "No registrations found.";
}
?>