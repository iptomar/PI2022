<?php
// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    line() ;
    echo  "Numbers between 1 and 5\n" ;
    line() ;
    for( $i = 1; $i < 6; $i = $i + 1 ) {
        echo $i  .  "\n" ;
    }
    line() ;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
function line() {
    for( $i = 0; $i < 20; $i = $i + 1 ) {
        echo  "*" ;
    }
    echo  "\n" ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	quarta, 2022 out 12 20:22

?>