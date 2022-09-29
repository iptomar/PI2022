<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Numero : " ;
    $num = intval(isset($_POST["num"])? $_POST["num"] : isset($_GET["num"]) ? $_GET["num"] : 0);
    
    echo $num . "<br/>";// print input 
    $i = 1 ;
    echo  "Divisores : " ;
    while($i < $num ){
        if($num % $i == 0 ){
            echo $i  .  " " ;
        }
        $i = $i + 1 ;
    }
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Thu, 2022 Sep 29 12:27

?>