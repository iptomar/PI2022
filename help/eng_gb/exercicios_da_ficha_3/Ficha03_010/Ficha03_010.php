<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Value of X        : " ;
    $x = floatval(isset($_POST["x"])? $_POST["x"] : isset($_GET["x"]) ? $_GET["x"] : 0);
    
    echo $x . "<br/>";// print input 
    $logX = 1/log(10)*log( $x ) ;
    echo  "Log10(X)         = " . $logX  ;
    $pow10 = 10 ^ $logX ;
    echo  "\nPow10(Log10(X))     = " . $pow10  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Tue, 2022 Sep 13 21:56

?>