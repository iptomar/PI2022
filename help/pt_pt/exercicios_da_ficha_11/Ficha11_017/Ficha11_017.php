<?php
// Programador           -

//Main Function
function main() {
    echo  "Copas    : " ;
    $copas = intval(isset($_POST["copas"])? $_POST["copas"] : isset($_GET["copas"]) ? $_GET["copas"] : 0);
    
    echo $copas . "<br/>";// print input 
    echo  "Altura   : " ;
    $alt = intval(isset($_POST["alt"])? $_POST["alt"] : isset($_GET["alt"]) ? $_GET["alt"] : 0);
    
    echo $alt . "<br/>";// print input 
    echo  "Caractér : " ;
    $char = isset($_POST["$char"])? $_POST["$char"] : isset($_GET["$char"]) ? $_GET["$char"] : 0;
    echo $char . "<br/>";// print input 
    pinheiro($copas , $alt , $char ) ;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
function linhaCopa($sp, $chars, $txt) {
    for( $i = 0; $i < $sp; $i = $i + 1 ) {
        echo  " " ;
    }
    for( $i = 0; $i < $chars; $i = $i + 1 ) {
        echo $txt  ;
    }
    echo  "\n" ;
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
function copa($alt, $txt) {
    for( $i = 1; $i < $alt + 1; $i = $i + 1 ) {
        $sp = $alt - $i ;
        $chrs1 = $i * 2 - 1 ;
        linhaCopa($sp , $chrs1 , $txt ) ;
    }
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
function pinheiro($c, $n, $txt) {
    for( $i = 0; $i < $c; $i = $i + 1 ) {
        copa($n , $txt ) ;
    }
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	quarta, 2022 out 12 20:16

?>