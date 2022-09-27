<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Base         : " ;
    $base = floatval(isset($_POST["base"])? $_POST["base"] : isset($_GET["base"]) ? $_GET["base"] : 0);
    
    echo $base . "<br/>";// print input 
    echo  "Exponent      : " ;
    $expo = floatval(isset($_POST["expo"])? $_POST["expo"] : isset($_GET["expo"]) ? $_GET["expo"] : 0);
    
    echo $expo . "<br/>";// print input 
    echo  "\nPotency     = " . ( pow( $base , $expo )  ) ;
    echo  "\nOperator     = " . ( $base ^ $expo  ) ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Tue, 2022 Sep 13 21:54

?>