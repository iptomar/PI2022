<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Verificar se a soma de dois valores reais" ;
    echo  "\né igual a um terceiro\n" ;
    echo  "Real 1     : " ;
    $r1 = floatval(isset($_POST["r1"])? $_POST["r1"] : isset($_GET["r1"]) ? $_GET["r1"] : 0);
    
    echo $r1 . "<br/>";// print input 
    echo  "Real 2     : " ;
    $r2 = floatval(isset($_POST["r2"])? $_POST["r2"] : isset($_GET["r2"]) ? $_GET["r2"] : 0);
    
    echo $r2 . "<br/>";// print input 
    echo  "Real 3     : " ;
    $r3 = floatval(isset($_POST["r3"])? $_POST["r3"] : isset($_GET["r3"]) ? $_GET["r3"] : 0);
    
    echo $r3 . "<br/>";// print input 
    echo $r1  .  " + " . $r2  .  " == " . $r3  .  " => " ;
    if($r1 + $r2 == $r3 ){
        echo  "Verdadeiro" ;
    }else{
        echo  "Falso" ;
    }
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 15:32

?>