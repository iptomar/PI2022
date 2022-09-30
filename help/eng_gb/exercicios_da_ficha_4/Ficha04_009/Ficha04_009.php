<?php
// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Check if the sum of two real values" ;
    echo  "\nis equal to a third\n" ;
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
        echo  "True" ;
    }else{
        echo  "False" ;
    }
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	domingo, 2022 set 18 23:28

?>