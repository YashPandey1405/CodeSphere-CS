<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Users Data Table</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            text-align: center;
            background-color: #f9f9f9;
        }
        table {
            width: 60%;
            margin: 30px auto;
            border-collapse: collapse;
            background-color: #fff;
            box-shadow: 0px 0px 10px rgba(0, 0, 0, 0.1);
        }
        th, td {
            padding: 12px;
            border: 1px solid black;
            text-align: left;
        }
        th {
            background-color: #f2f2f2;
            font-size: 18px;
        }
        td {
            font-size: 16px;
        }
    </style>
</head>
<body>

    <h2>Users Information Table</h2>

    <table>
        <tr>
            <th>Name</th>
            <th>Password</th>
            <th>Email</th>
        </tr>

        <?php
        // Read the file
        $file = "data.txt";
        if (file_exists($file)) {
            $lines = file($file, FILE_IGNORE_NEW_LINES | FILE_SKIP_EMPTY_LINES);
            foreach ($lines as $line) {
                $parts = explode(":", $line);
                if (count($parts) == 3) {
                    $name = trim($parts[0]);
                    $password = trim($parts[1]);
                    $email = trim($parts[2]);

                    echo "<tr>
                            <td>$name</td>
                            <td>$password</td>
                            <td>$email</td>
                          </tr>";
                }
            }
        } else {
            echo "<tr><td colspan='3'>File not found!</td></tr>";
        }
        ?>

    </table>

</body>
</html>
