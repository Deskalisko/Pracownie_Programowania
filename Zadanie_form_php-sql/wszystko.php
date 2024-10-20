<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Wszystkie DANE</title>
</head>
<body>
    <?php
        $servername = "localhost";
        $username = "root";
        $password = "";
        $dbname= "zadaniepesel";
        
        // Create connection
        $conn = new mysqli($servername, $username, $password, $dbname);
        // Check connection
        if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
        }echo "<b>Nawiązano połączenie</b><br>";
        $sql="SELECT * FROM lista;";
        $pobrane_dane = $conn->query($sql);
        echo "<table border='1px solid black'>";
        echo "<tr><th>Imię</th><th>Nazwisko</th><th>Płeć</th><th>Data urodzenia</th></tr>";
        while($row = $pobrane_dane->fetch_assoc()){
            echo "<tr><td>".$row["imie_sql"]."</td><td>".$row["nazwisko_sql"]."</td><td>".$row["plec"]."</td><td>".$row["data_ur"]."</td></tr>";
        }
        echo "</table>";

        $conn->close();
    ?><br><br>
    <a href="pokaz.html">BAZA DANYCH</a>
    <br><a href="formularz.html">Dodaj kolejną osobę</a>
</body>
</html>