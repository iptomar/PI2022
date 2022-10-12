<?php
// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "height : " ;
    $Height = intval(isset($_POST["Height"])? $_POST["Height"] : isset($_GET["Height"]) ? $_GET["Height"] : 0);
    
    echo $Height . "<br/>";// print input 
    for( $i = 1; $i < $Height + 1; $i = $i + 1 ) {
        line($i ) ;
    }
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

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	quarta, 2022 out 12 20:22

?>