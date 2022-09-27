<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Nome : " ;
    $nome = isset($_POST["$nome"])? $_POST["$nome"] : isset($_GET["$nome"]) ? $_GET["$nome"] : 0;
    echo $nome . "<br/>";// print input 
    echo  "Numero de caracteres = " . ( sizeof( $nome )  ) ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 14:31

?>