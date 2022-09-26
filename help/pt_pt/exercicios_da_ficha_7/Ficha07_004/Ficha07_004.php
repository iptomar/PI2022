<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Somatório Pares [0,10]\n" ;
    $soma = 0 ;
    for( $i = 1; $i < 6; $i = $i + 1 ) {
        $f = 2 * $i ;
        echo $soma  .  " + " . $f  ;
        $soma = $soma + $f ;
        echo  " = " . $soma  .  "\n" ;
    }
    echo  "\nSoma = " . $soma  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 16:13

?>