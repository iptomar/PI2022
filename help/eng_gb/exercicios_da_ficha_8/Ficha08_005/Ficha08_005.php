<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    $height = 0.0 ;
    do{
        echo  "Height : " ;
        $height = floatval(isset($_POST["height"])? $_POST["height"] : isset($_GET["height"]) ? $_GET["height"] : 0);
        
        echo $height . "<br/>";// print input 
    }while($height < 0.2 || $height > 3.0 );
    echo  "Height = " . $height  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Fri, 2022 Sep 30 23:15

?>