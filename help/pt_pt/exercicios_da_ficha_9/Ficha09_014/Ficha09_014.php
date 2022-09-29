<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Decimal : " ;
    $num = intval(isset($_POST["num"])? $_POST["num"] : isset($_GET["num"]) ? $_GET["num"] : 0);
    
    echo $num . "<br/>";// print input 
    $binario = "" ;
    while($num > 0 ){
        $binario = $num % 2 . $binario ;
        $num = $num / 2 ;
    }
    echo  "Binario = " . $binario  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Thu, 2022 Sep 29 12:26

?>