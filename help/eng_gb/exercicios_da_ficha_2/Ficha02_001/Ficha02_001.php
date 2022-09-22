<?php
// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    $name = isset($_POST["$name"])? $_POST["$name"] : isset($_GET["$name"]) ? $_GET["$name"] : 0;
    echo $name . "<br/>";// print input 
    echo  "Hello " . $name  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	quarta, 2022 set 21 22:49

?>