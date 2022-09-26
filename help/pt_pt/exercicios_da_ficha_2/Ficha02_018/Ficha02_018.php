<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Número real    : " ;
    $n1 = floatval(isset($_POST["n1"])? $_POST["n1"] : isset($_GET["n1"]) ? $_GET["n1"] : 0);
    
    echo $n1 . "<br/>";// print input 
    echo  "Número inteiro : " ;
    $n2 = intval(isset($_POST["n2"])? $_POST["n2"] : isset($_GET["n2"]) ? $_GET["n2"] : 0);
    
    echo $n2 . "<br/>";// print input 
    $r1 = 0 ;
    $r2 = 0 ;
    $r3 = 0 ;
    $r4 = 0 ;
    $r1 = $n1 + $n2 ;
    $r2 = $n1 - $n2 ;
    $r3 = $n1 * $n2 ;
    $r4 = $n1 / $n2 ;
    echo $n1  .  " + " . $n2  .  " = " . $r1  ;
    echo  "\n" . $n1  .  " - " . $n2  .  " = " . $r2  ;
    echo  "\n" . $n1  .  " * " . $n2  .  " = " . $r3  ;
    echo  "\n" . $n1  .  " / " . $n2  .  " = " . $r4  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 16:44

?>