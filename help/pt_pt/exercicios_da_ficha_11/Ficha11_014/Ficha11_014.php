<?php
// Programador           -

//Main Function
function main() {
    echo  "Altura  : " ;
    $altura = intval(isset($_POST["altura"])? $_POST["altura"] : isset($_GET["altura"]) ? $_GET["altura"] : 0);
    
    echo $altura . "<br/>";// print input 
    echo  "Largura : " ;
    $largura = intval(isset($_POST["largura"])? $_POST["largura"] : isset($_GET["largura"]) ? $_GET["largura"] : 0);
    
    echo $largura . "<br/>";// print input 
    caixa($largura , $altura ) ;
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
function interior($n) {
    echo  "*" ;
    for( $i = 1; $i < $n - 1; $i = $i + 1 ) {
        echo  " " ;
    }
    echo  "*\n" ;
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
function caixa($larg, $alt) {
    linha($larg ) ;
    for( $i = 1; $i < $alt - 1; $i = $i + 1 ) {
        interior($larg ) ;
    }
    linha($larg ) ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	quarta, 2022 out 12 20:13

?>