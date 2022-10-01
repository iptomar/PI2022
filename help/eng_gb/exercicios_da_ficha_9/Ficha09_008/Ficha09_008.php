<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Fibonaci sequence sum\n " ;
    $f0 = 1 ;
    $f1 = 1 ;
    echo $f0  .  " " . $f1  ;
    $sum = 2 ;
    while($f0 + $f1 < 100 ){
        $fn = $f0 + $f1 ;
        $sum = $sum + $fn ;
        echo  " " . $fn  ;
        $f1 = $f0 ;
        $f0 = $fn ;
    }
    echo  "\nSum = " . $sum  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Sat, 2022 Oct 01 00:11

?>