<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Nome : " ;
    $nome1 = isset($_POST["$nome1"])? $_POST["$nome1"] : isset($_GET["$nome1"]) ? $_GET["$nome1"] : 0;
    echo $nome1 . "<br/>";// print input 
    echo  "Nome : " ;
    $nome2 = isset($_POST["$nome2"])? $_POST["$nome2"] : isset($_GET["$nome2"]) ? $_GET["$nome2"] : 0;
    echo $nome2 . "<br/>";// print input 
    echo  "Nomes Ordenados" ;
    echo  "\n" . ( min( $nome1 , $nome2 )  ) ;
    echo  "\n" . ( max( $nome1 , $nome2 )  ) ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Tue, 2022 Sep 13 21:57

?>