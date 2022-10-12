<?php
// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Height : " ;
    $height = intval(isset($_POST["height"])? $_POST["height"] : isset($_GET["height"]) ? $_GET["height"] : 0);
    
    echo $height . "<br/>";// print input 
    triangle($height ) ;
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
//::::::::::::::::::::::::::::::::::::::::::::::::::
function triangle($height) {
    for( $i = 1; $i < $height + 1; $i = $i + 1 ) {
        line($i ) ;
    }
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	quarta, 2022 out 12 20:23

?>