<?php
// Programador           -

//Main Function
function main() {
    linha(3 ) ;
    linha(5 ) ;
    linha(7 ) ;
    linha(5 ) ;
    linha(3 ) ;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
function linha($n) {
    for( $i = 0; $i < $n; $i = $i + 1 ) {
        echo  "*" ;
    }
    echo  "\n" ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	quarta, 2022 out 12 20:09

?>