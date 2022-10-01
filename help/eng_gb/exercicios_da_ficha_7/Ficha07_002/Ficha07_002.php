<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Summation step 2\n" ;
    $sum = 0 ;
    for( $i = 1; $i < 10; $i = $i + 2 ) {
        echo $sum  .  " + " . $i  ;
        $sum = $sum + $i ;
        echo  "     = " . $sum  .  "\n" ;
    }
    echo  "\nSum = " . $sum  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Fri, 2022 Sep 30 22:36

?>