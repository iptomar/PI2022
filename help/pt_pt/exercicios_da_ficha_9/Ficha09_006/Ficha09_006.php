<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Limite inferior : " ;
    $inf = intval(isset($_POST["inf"])? $_POST["inf"] : isset($_GET["inf"]) ? $_GET["inf"] : 0);
    
    echo $inf . "<br/>";// print input 
    if($inf % 2 == 0 ){
        $inf = $inf + 1 ;
    }
    echo  "Limite superior : " ;
    $sup = intval(isset($_POST["sup"])? $_POST["sup"] : isset($_GET["sup"]) ? $_GET["sup"] : 0);
    
    echo $sup . "<br/>";// print input 
    while($inf <= $sup ){
        echo $inf  .  " " ;
        $inf = $inf + 2 ;
    }
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Thu, 2022 Sep 29 12:25

?>