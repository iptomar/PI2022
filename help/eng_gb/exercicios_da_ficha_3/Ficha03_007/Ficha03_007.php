<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Pythagorean Theorem\n" ;
    echo  "Catet a     : " ;
    $a = floatval(isset($_POST["a"])? $_POST["a"] : isset($_GET["a"]) ? $_GET["a"] : 0);
    
    echo $a . "<br/>";// print input 
    echo  "Catet b     : " ;
    $b = floatval(isset($_POST["b"])? $_POST["b"] : isset($_GET["b"]) ? $_GET["b"] : 0);
    
    echo $b . "<br/>";// print input 
    $c = sqrt( pow( $a , 2 ) + $b ^ 2 ) ;
    echo  "Hypotnusa     : " . $c  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Tue, 2022 Sep 13 21:56

?>