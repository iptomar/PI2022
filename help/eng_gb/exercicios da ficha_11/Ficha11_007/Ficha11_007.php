<?php
// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    line(3 ) ;
    line(5 ) ;
    line(7 ) ;
    line(5 ) ;
    line(3 ) ;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
function line($n) {
    for( $i = 0; $i < $n; $i = $i + 1 ) {
        echo  "*" ;
    }
    echo  "\n" ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	quarta, 2022 out 12 20:22

?>