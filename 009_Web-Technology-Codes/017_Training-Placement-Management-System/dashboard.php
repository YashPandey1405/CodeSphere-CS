<?php
session_start();
include 'includes/db_connect.php';

if (!isset($_SESSION["user_id"])) {
    header("Location: login.php");
    exit();
}

$user_id = $_SESSION["user_id"];
$role = $_SESSION["role"];

echo "<h2>Welcome to Dashboard</h2>";

if ($role == "student") {
    echo "<h3>Available Jobs</h3>";
    $jobs = $conn->query("SELECT * FROM jobs");
    while ($job = $jobs->fetch_assoc()) {
        echo "<p><strong>{$job['title']}</strong>: {$job['description']} 
        <a href='apply.php?job_id={$job['id']}'>Apply</a></p>";
    }
} else {
    echo "<h3>Post a Job</h3>";
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $title = $_POST["title"];
        $description = $_POST["description"];
        $sql = "INSERT INTO jobs (title, description, recruiter_id) VALUES ('$title', '$description', '$user_id')";
        if ($conn->query($sql)) {
            echo "Job Posted Successfully!";
        }
    }
    echo '<form method="post">
        <input type="text" name="title" placeholder="Job Title" required>
        <textarea name="description" placeholder="Job Description" required></textarea>
        <button type="submit">Post Job</button>
    </form>';
}

echo '<br><a href="logout.php">Logout</a>';
?>
