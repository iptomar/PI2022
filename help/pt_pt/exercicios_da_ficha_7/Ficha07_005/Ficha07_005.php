<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Produtório\n" ;
    $produto = 1 ;
    for( $i = 1; $i < 5; $i = $i + 1 ) {
        echo $produto  .  " x " . $i  ;
        $produto = $produto * $i ;
        echo  " = " . $produto  .  "\n" ;
    }
    echo  "\nTotal = " . $produto  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 16:13

?>