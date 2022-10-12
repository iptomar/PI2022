<?php
// Programador           -

//Main Function
function main() {
    echo  "Altura : " ;
    $altura = intval(isset($_POST["altura"])? $_POST["altura"] : isset($_GET["altura"]) ? $_GET["altura"] : 0);
    
    echo $altura . "<br/>";// print input 
    echo  "Caractér : " ;
    $c = isset($_POST["$c"])? $_POST["$c"] : isset($_GET["$c"]) ? $_GET["$c"] : 0;
    echo $c . "<br/>";// print input 
    trianguloC($altura , $c ) ;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
function linhaC($n, $c) {
    for( $i = 0; $i < $n; $i = $i + 1 ) {
        echo $c  ;
    }
    echo  "\n" ;
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
function trianguloC($altura, $c) {
    for( $i = 0; $i < $altura; $i = $i + 1 ) {
        linhaC($altura - $i , $c ) ;
    }
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	quarta, 2022 out 12 20:13

?>