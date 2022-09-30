<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    for( $n = 1; $n < 11; $n = $n + 1 ) {
        echo  "\nTabuada do " . $n  .  "\n" ;
        for( i = 1; i < 11; i = i + 1 ) {
            echo $n  .  " x " . i  .  " = " . ( i * $n  ) . "\n" ;
        }
    }
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Fri, 2022 Sep 30 21:54

?>