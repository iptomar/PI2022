<?php
// Programador           -

//Main Function
function main() {
    echo  "Altura : " ;
    $altura = intval(isset($_POST["altura"])? $_POST["altura"] : isset($_GET["altura"]) ? $_GET["altura"] : 0);
    
    echo $altura . "<br/>";// print input 
    quadrado($altura ) ;
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
//::::::::::::::::::::::::::::::::::::::::::::::::::
function quadrado($altura) {
    for( $i = 1; $i < $altura + 1; $i = $i + 1 ) {
        linha($altura ) ;
    }
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	quarta, 2022 out 12 20:11

?>