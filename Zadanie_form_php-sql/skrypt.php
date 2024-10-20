<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Skrypt</title>
</head>
<body>
    <?php
        //Przypisanie zmiennych zmiennej POST oraz sprawdzenie peselu
        $imie=$_POST['imie'];
        $nazwisko=$_POST['nazwisko'];
        $pesel=$_POST['pesel'];
        echo "Imię: ".$imie."<br>Nazwisko: ".$nazwisko."<br>Podany Pesel: ".$pesel."<br>";
        if(strlen($pesel)==11){
            $suma=(substr($pesel,0,1)*1)+(substr($pesel,1,1)*3)+(substr($pesel,2,1)*7)+(substr($pesel,3,1)*9)+(substr($pesel,4,1)*1)+(substr($pesel,5,1)*3)+(substr($pesel,6,1)*7)+(substr($pesel,7,1)*9)+substr($pesel,8,1)+(substr($pesel,9,1)*3);
            $suma_kontrolna=substr($suma,-1)-10;
            if(abs($suma_kontrolna)==substr($pesel,10,1)){
                echo "<b>Podany numer pesel jest prawidłowy</b><br>";
                if(substr($pesel,9,1)%2==0){
                    echo "Płeć: Kobieta<br>";
                    $plec="Kobieta";
                }else{ echo "Płeć: Mężczyzna<br>";
                    $plec="Mężczyzna";}
    $rok = substr($pesel, 0, 2);
    $miesiac = substr($pesel, 2, 2);
    $dzien = substr($pesel, 4, 2);
    if ($miesiac >32) {
    $rok += 2100;
    $miesiac -= 40;
    }elseif($miesiac > 12){
        $rok += 2000;
        $miesiac -= 20;
    }else {
    $rok += 1900;
    }
    echo "Data urodzenia: ".$dzien."-".$miesiac."-".$rok;
        // Przypisanie zmiennych bazo_danowych
        $servername = "localhost";
        $username = "root";
        $password = "";
        $dbname= "zadaniepesel";
        // Create connection
        $conn = new mysqli($servername, $username, $password, $dbname);
        // Check connection
        if ($conn->connect_error) {
        die("Niepowodzenie polaczenia: " . $conn->connect_error);
        }
        $dodawanie_do_bazy="INSERT INTO lista (imie_sql, nazwisko_sql, pesel_sql, data_ur, plec) VALUES ('".$imie."', '".$nazwisko."', '".$pesel."','$dzien.$miesiac.$rok','$plec')";        
        if ($conn->query($dodawanie_do_bazy) === TRUE) {
            echo "<br>Nowy rekord został dodany";
          } else {
            echo "Niepowodzenie w dodaniu rekordu " . $dodawanie_do_bazy . "<br>" . $conn->error;
          }
        $conn->close();
            }else echo "PESEL NIE ISTNIEJE !!!";
        }else echo "Podany PESEL jest NIEPRAWIDŁOWY!!!";

        echo "<br><br><a href='formularz.html'>Dodaj kolejną osobę</a>";
        echo "<br><a href='pokaz.html'>Wyświetl wprowadzone dane</a>";
        $p=$_POST['pesel'];
        echo "<br>".$p[1];
    ?>
</body>
</html>