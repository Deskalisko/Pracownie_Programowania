<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>sort()</title>
</head>
<body>
<?php 
$cars = array("Volvo", "BMW", "Toyota"); 
echo "1 auto przed sortowaniem: ".$cars[0];
echo "<br>2 auto przed sortowaniem: ".$cars[1];
echo "<br>3 auto przed sortowaniem: ".$cars[2];

sort($cars);
echo "<br><br>1 auto po sortowaniu: ".$cars[0];
echo "<br>2 auto po sortowaniu: ".$cars[1];
echo "<br>3 auto po sortowaniu: ".$cars[2];

rsort($cars);
echo "<br><br>1 auto po sortowaniu: ".$cars[0];
echo "<br>2 auto po sortowaniu: ".$cars[1];
echo "<br>3 auto po sortowaniu: ".$cars[2];

asort($cars);
echo "<br><br>1 auto po sortowaniu: ".$cars[0];
echo "<br>2 auto po sortowaniu: ".$cars[1];
echo "<br>3 auto po sortowaniu: ".$cars[2];

ksort($cars);
echo "<br><br>1 auto po sortowaniu: ".$cars[0];
echo "<br>2 auto po sortowaniu: ".$cars[1];
echo "<br>3 auto po sortowaniu: ".$cars[2];

arsort($cars);
echo "<br><br>1 auto po sortowaniu: ".$cars[0];
echo "<br>2 auto po sortowaniu: ".$cars[1];
echo "<br>3 auto po sortowaniu: ".$cars[2];

krsort($cars);
echo "<br><br>1 auto po sortowaniu: ".$cars[0];
echo "<br>2 auto po sortowaniu: ".$cars[1];
echo "<br>3 auto po sortowaniu: ".$cars[2];
?> 
</body>
</html>