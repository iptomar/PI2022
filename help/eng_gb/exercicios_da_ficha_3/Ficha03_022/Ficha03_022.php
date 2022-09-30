<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Angle             : " ;
    $ang = floatval(isset($_POST["ang"])? $_POST["ang"] : isset($_GET["ang"]) ? $_GET["ang"] : 0);
    
    echo $ang . "<br/>";// print input 
    echo  "Hyperbolic sine     = " . ( sinh( $ang )  ) . "\n" ;
    echo  "Hyperbolic Cosine     = " . ( cosh( $ang )  ) . "\n" ;
    echo  "Hyperbolic tangent     = " . ( tanh( $ang )  ) ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Tue, 2022 Sep 13 21:59

?>