<?php
// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "What is your name     : " ;
    $name = isset($_POST["$name"])? $_POST["$name"] : isset($_GET["$name"]) ? $_GET["$name"] : 0;
    echo $name . "<br/>";// print input 
    echo  "What is your age     : " ;
    $age = intval(isset($_POST["age"])? $_POST["age"] : isset($_GET["age"]) ? $_GET["age"] : 0);
    
    echo $age . "<br/>";// print input 
    echo  "Hello " . $name  .  " de " . $age  .  " years" ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	quarta, 2022 set 21 22:50

?>