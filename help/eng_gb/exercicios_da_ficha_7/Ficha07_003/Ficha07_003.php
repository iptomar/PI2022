<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Formula Summation\n" ;
    $sum = 0 ;
    for( $i = 1; $i < 6; $i = $i + 1 ) {
        $f = 2 * $i - 1 ;
        echo $sum  .  " + " . $f  ;
        $sum = $sum + $f ;
        echo  "     = " . $sum  .  "\n" ;
    }
    echo  "\nSum= " . $sum  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Fri, 2022 Sep 30 22:36

?>