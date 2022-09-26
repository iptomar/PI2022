<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Ângulo (rad)     : " ;
    $ang = floatval(isset($_POST["ang"])? $_POST["ang"] : isset($_GET["ang"]) ? $_GET["ang"] : 0);
    
    echo $ang . "<br/>";// print input 
    echo  "Seno         = " . ( sin( $ang )  ) . "\n" ;
    echo  "Coseno         = " . ( cos( $ang )  ) . "\n" ;
    echo  "Tangente     = " . ( tan( $ang )  ) ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 14:32

?>