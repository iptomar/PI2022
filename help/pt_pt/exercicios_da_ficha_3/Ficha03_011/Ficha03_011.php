<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Número inteiro    : " ;
    $n1 = intval(isset($_POST["n1"])? $_POST["n1"] : isset($_GET["n1"]) ? $_GET["n1"] : 0);
    
    echo $n1 . "<br/>";// print input 
    echo  "Número real     : " ;
    $n2 = floatval(isset($_POST["n2"])? $_POST["n2"] : isset($_GET["n2"]) ? $_GET["n2"] : 0);
    
    echo $n2 . "<br/>";// print input 
    echo  "Números Ordenados" ;
    echo  "\n" . ( min( $n1 , $n2 )  ) ;
    echo  "\n" . ( max( $n1 , $n2 )  ) ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 14:30

?>