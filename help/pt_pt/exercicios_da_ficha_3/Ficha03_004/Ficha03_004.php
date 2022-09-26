<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Teorema de Pitágoras\n" ;
    echo  "Cateto a     : " ;
    $a = floatval(isset($_POST["a"])? $_POST["a"] : isset($_GET["a"]) ? $_GET["a"] : 0);
    
    echo $a . "<br/>";// print input 
    echo  "Cateto b     : " ;
    $b = floatval(isset($_POST["b"])? $_POST["b"] : isset($_GET["b"]) ? $_GET["b"] : 0);
    
    echo $b . "<br/>";// print input 
    $c = ( $a * $a + $b * $b ) ^ 0.5 ;
    echo  "Hipotnusa     : " . $c  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 14:29

?>