<?php
// Programador           -

//Main Function
function main() {
    echo  "Altura   : " ;
    $altura = intval(isset($_POST["altura"])? $_POST["altura"] : isset($_GET["altura"]) ? $_GET["altura"] : 0);
    
    echo $altura . "<br/>";// print input 
    echo  "Largura  : " ;
    $largura = intval(isset($_POST["largura"])? $_POST["largura"] : isset($_GET["largura"]) ? $_GET["largura"] : 0);
    
    echo $largura . "<br/>";// print input 
    echo  "Limite   : " ;
    $limite = isset($_POST["$limite"])? $_POST["$limite"] : isset($_GET["$limite"]) ? $_GET["$limite"] : 0;
    echo $limite . "<br/>";// print input 
    echo  "Interior : " ;
    $interior = isset($_POST["$interior"])? $_POST["$interior"] : isset($_GET["$interior"]) ? $_GET["$interior"] : 0;
    echo $interior . "<br/>";// print input 
    caixa($largura , $altura , $limite , $interior ) ;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
function linha($n, $c) {
    for( $i = 0; $i < $n; $i = $i + 1 ) {
        echo $c  ;
    }
    echo  "\n" ;
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
function interior($n, $cl, $ci) {
    echo $cl  ;
    for( $i = 1; $i < $n - 1; $i = $i + 1 ) {
        echo $ci  ;
    }
    echo $cl  .  "\n" ;
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
function caixa($larg, $alt, $cl, $ci) {
    linha($larg , $cl ) ;
    for( $i = 1; $i < $alt - 1; $i = $i + 1 ) {
        interior($larg , $cl , $ci ) ;
    }
    linha($larg , $cl ) ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	quarta, 2022 out 12 20:14

?>