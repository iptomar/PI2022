<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Minimo : " ;
    $imin = intval(isset($_POST["imin"])? $_POST["imin"] : isset($_GET["imin"]) ? $_GET["imin"] : 0);
    
    echo $imin . "<br/>";// print input 
    echo  "Maximo : " ;
    $imax = intval(isset($_POST["imax"])? $_POST["imax"] : isset($_GET["imax"]) ? $_GET["imax"] : 0);
    
    echo $imax . "<br/>";// print input 
    for( $i = $imin; $i < $imax + 1; $i = $i + 1 ) {
        if($i % 2 == 0 ){
            echo $i  .  " " ;
        }
    }
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 16:03

?>