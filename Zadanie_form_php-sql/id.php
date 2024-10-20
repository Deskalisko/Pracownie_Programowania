<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Dane osoby ID</title>
</head>
<body>
    <?php
        $identyfikator=$_POST['idd'];
        echo "ID = ".$identyfikator."<br>";
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
        $sql="SELECT * FROM lista where id=$identyfikator;";
        $pobrane_dane = $conn->query($sql);
        while($row = $pobrane_dane->fetch_assoc()){
            echo "<br>Imię: ".$row["imie_sql"]."<br>Nazwisko: ".$row["nazwisko_sql"]."<br>Płeć: ".$row["plec"]."<br>Data urodzenia: ".$row["data_ur"];
        }

        $conn->close();
    ?><br><br>
    <a href="pokaz.html">BAZA DANYCH</a>
    <br><a href="formularz.html">Dodaj kolejną osobę</a>
</body>
</html>