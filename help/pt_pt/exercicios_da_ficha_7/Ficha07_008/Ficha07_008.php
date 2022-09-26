<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "x : " ;
    $x = floatval(isset($_POST["x"])? $_POST["x"] : isset($_GET["x"]) ? $_GET["x"] : 0);
    
    echo $x . "<br/>";// print input 
    echo  "g(" . $x  .  ")= " ;
    if($x < 1 ){
        $x = - $x ^ 2 + 1 ;
    }else{
        $x = $x - 1 ;
    }
    echo $x  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 16:14

?>