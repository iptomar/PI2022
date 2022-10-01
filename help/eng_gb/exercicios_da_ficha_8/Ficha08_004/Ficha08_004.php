<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    $n = 0 ;
    do{
        echo  "n : " ;
        $n = intval(isset($_POST["n"])? $_POST["n"] : isset($_GET["n"]) ? $_GET["n"] : 0);
        
        echo $n . "<br/>";// print input 
    }while($n <= 0 );
    echo  "Value of n = " . $n  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Fri, 2022 Sep 30 23:15

?>