<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Height : " ;
    $height = intval(isset($_POST["height"])? $_POST["height"] : isset($_GET["height"]) ? $_GET["height"] : 0);
    
    echo $height . "<br/>";// print input 
    for( $i = 0; $i < $height; $i = $i + 1 ) {
        for( j = 0; j < height; j = j + 1 ) {
            echo  "*" ;
        }
        echo  "\n" ;
    }
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Fri, 2022 Sep 30 21:55

?>