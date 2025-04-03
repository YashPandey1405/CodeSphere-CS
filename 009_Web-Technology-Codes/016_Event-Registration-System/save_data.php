<?php
// save_data.php - Saves registration data to a text file
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $name = $_POST['fullname'];
    $email = $_POST['email'];
    $phone = $_POST['phone'];
    $event = $_POST['event'];
    
    $file = fopen("registrations.txt", "a");
    fwrite($file, "$name, $email, $phone, $event\n");
    fclose($file);
    echo "Data saved successfully!";
}
?>