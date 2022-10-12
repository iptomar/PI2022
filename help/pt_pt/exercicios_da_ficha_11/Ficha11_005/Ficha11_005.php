<?php
// Programador           -

//Main Function
function main() {
    linha() ;
    echo  "Numeros entre 1 e 5\n" ;
    linha() ;
    for( $i = 1; $i < 6; $i = $i + 1 ) {
        echo $i  .  "\n" ;
    }
    linha() ;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
function linha() {
    for( $i = 0; $i < 20; $i = $i + 1 ) {
        echo  "*" ;
    }
    echo  "\n" ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	quarta, 2022 out 12 20:09

?>