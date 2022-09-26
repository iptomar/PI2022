<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Número de termos : " ;
    $n = intval(isset($_POST["n"])? $_POST["n"] : isset($_GET["n"]) ? $_GET["n"] : 0);
    
    echo $n . "<br/>";// print input 
    $produto = 1 ;
    for( $i = 1; $i < $n + 1; $i = $i + 1 ) {
        $f = 2 * $i - 1 ;
        $produto = $produto * $f ;
    }
    echo  "Resultado = " . $produto  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 16:13

?>