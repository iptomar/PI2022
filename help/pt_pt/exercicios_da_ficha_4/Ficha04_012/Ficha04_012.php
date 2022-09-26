<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Real 1     : " ;
    $r1 = floatval(isset($_POST["r1"])? $_POST["r1"] : isset($_GET["r1"]) ? $_GET["r1"] : 0);
    
    echo $r1 . "<br/>";// print input 
    echo  "Real 2     : " ;
    $r2 = floatval(isset($_POST["r2"])? $_POST["r2"] : isset($_GET["r2"]) ? $_GET["r2"] : 0);
    
    echo $r2 . "<br/>";// print input 
    echo  "\nOrdem decrescente\n" ;
    if($r1 > $r2 ){
        echo $r1  .  "    " . $r2  ;
    }else{
        echo $r2  .  "    " . $r1  ;
    }
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 15:32

?>