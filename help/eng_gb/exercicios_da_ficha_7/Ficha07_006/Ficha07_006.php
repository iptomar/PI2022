<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Number of terms : " ;
    $n = intval(isset($_POST["n"])? $_POST["n"] : isset($_GET["n"]) ? $_GET["n"] : 0);
    
    echo $n . "<br/>";// print input 
    $product = 1 ;
    for( $i = 1; $i < $n + 1; $i = $i + 1 ) {
        $f = 2 * $i - 1 ;
        $product = $product * $f ;
    }
    echo  "Result = " . $product  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Fri, 2022 Sep 30 22:37

?>