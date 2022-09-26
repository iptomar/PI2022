<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Ângulo             : " ;
    $ang = floatval(isset($_POST["ang"])? $_POST["ang"] : isset($_GET["ang"]) ? $_GET["ang"] : 0);
    
    echo $ang . "<br/>";// print input 
    echo  "Seno hiperbólico     = " . ( sinh( $ang )  ) . "\n" ;
    echo  "Coseno hiperbólico     = " . ( cosh( $ang )  ) . "\n" ;
    echo  "Tangente hiperbólica     = " . ( tanh( $ang )  ) ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 14:33

?>