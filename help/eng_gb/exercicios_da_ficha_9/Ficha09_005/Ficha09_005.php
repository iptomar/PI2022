<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Inferior limit : " ;
    $inf = intval(isset($_POST["inf"])? $_POST["inf"] : isset($_GET["inf"]) ? $_GET["inf"] : 0);
    
    echo $inf . "<br/>";// print input 
    echo  "Upper limit : " ;
    $sup = intval(isset($_POST["sup"])? $_POST["sup"] : isset($_GET["sup"]) ? $_GET["sup"] : 0);
    
    echo $sup . "<br/>";// print input 
    while($inf <= $sup ){
        if($inf % 2 != 0 ){
            echo $inf  .  " " ;
        }
        $inf = $inf + 1 ;
    }
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Sat, 2022 Oct 01 00:11

?>