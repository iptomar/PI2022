<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Número positivo    : " ;
    $num = intval(isset($_POST["num"])? $_POST["num"] : isset($_GET["num"]) ? $_GET["num"] : 0);
    
    echo $num . "<br/>";// print input 
    echo  "Número de dígitos     = " . ( sizeof( $num . "" )  ) ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 14:32

?>