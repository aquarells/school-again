<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Strona glowna</title>
    
</head>
<body>

    <?php
    echo "</table>";

    echo "<h2>Szachownica</h2> <br>";
    echo "<table border>";
    for($k=0; $k<=7; $k++) {
        echo "<tr>";
        if($k % 2) {
            for($a=0; $a<=3; $a++) { 
        echo '<td width="100" height="100" style="background-color: white;">';
        echo "</td>";
        echo '<td width="100" height="100" style="background-color: black;">';
        echo "</td>";
        }
          } else {
            for($a=0; $a<=3; $a++) { 
            echo '<td width="100" height="100" style="background-color: black;">';
            echo "</td>";
            echo '<td width="100" height="100" style="background-color: white;">';
            echo "</td>";
          }
    } 
    echo "</tr>";
}
    echo "</table>";
    ?>
</body>
</html>