<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Name : " ;
    $name = isset($_POST["$name"])? $_POST["$name"] : isset($_GET["$name"]) ? $_GET["$name"] : 0;
    echo $name . "<br/>";// print input 
    echo  "Number of characters = " . ( sizeof( $name )  ) ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Tue, 2022 Sep 13 21:58

?>