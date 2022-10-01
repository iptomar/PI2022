<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Productory\n" ;
    $product = 1 ;
    for( $i = 1; $i < 5; $i = $i + 1 ) {
        echo $product  .  " x " . $i  ;
        $product = $product * $i ;
        echo  " = " . $product  .  "\n" ;
    }
    echo  "\nTotal = " . $product  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Fri, 2022 Sep 30 22:36

?>