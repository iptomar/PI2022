<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Somatório passo 2\n" ;
    $soma = 0 ;
    for( $i = 1; $i < 10; $i = $i + 2 ) {
        echo $soma  .  " + " . $i  ;
        $soma = $soma + $i ;
        echo  "     = " . $soma  .  "\n" ;
    }
    echo  "\nSoma = " . $soma  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 16:13

?>