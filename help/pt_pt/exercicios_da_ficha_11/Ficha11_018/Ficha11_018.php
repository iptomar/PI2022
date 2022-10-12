<?php
// Programador           -

//Main Function
function main() {
    $alt = 0 ;
    while(true ){
        echo  "Altura   : " ;
        $alt = intval(isset($_POST["alt"])? $_POST["alt"] : isset($_GET["alt"]) ? $_GET["alt"] : 0);
        
        echo $alt . "<br/>";// print input 
        if($alt % 2 == 0 && $alt >= 4 ){
            break;
        }
        echo  "    Valor errado\n" ;
    }
    echo  "Caractér : " ;
    $txt = isset($_POST["$txt"])? $_POST["$txt"] : isset($_GET["$txt"]) ? $_GET["$txt"] : 0;
    echo $txt . "<br/>";// print input 
    copa($alt / 2 , $txt ) ;
    tronco($alt / 2 , $txt ) ;
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
function tronco($n, $ch) {
    for( $i = 0; $i < $n; $i = $i + 1 ) {
        for( j = 0; j < n - 1; j = j + 1 ) {
            echo  " " ;
        }
        echo $ch  .  "\n" ;
    }
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	quarta, 2022 out 12 20:17

?>