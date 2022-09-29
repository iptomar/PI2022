<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Soma da sequência de fibonacci\n " ;
    $f0 = 1 ;
    $f1 = 1 ;
    echo $f0  .  " " . $f1  ;
    $soma = 2 ;
    while($f0 + $f1 < 100 ){
        $fn = $f0 + $f1 ;
        $soma = $soma + $fn ;
        echo  " " . $fn  ;
        $f1 = $f0 ;
        $f0 = $fn ;
    }
    echo  "\nSoma = " . $soma  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Thu, 2022 Sep 29 12:25

?>