<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Value of X    : " ;
    $x = floatval(isset($_POST["x"])? $_POST["x"] : isset($_GET["x"]) ? $_GET["x"] : 0);
    
    echo $x . "<br/>";// print input 
    echo  "\nRoot         = " . ( sqrt( $x )  ) ;
    echo  "\nPotency     = " . ( pow( $x , 0.5 )  ) ;
    echo  "\nOperator     = " . ( $x ^ 0.5  ) ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Tue, 2022 Sep 13 21:55

?>