<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Seno     : " ;
    $x = floatval(isset($_POST["x"])? $_POST["x"] : isset($_GET["x"]) ? $_GET["x"] : 0);
    
    echo $x . "<br/>";// print input 
    echo  "Arco     = " . ( asin( $x )  ) ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 14:32

?>