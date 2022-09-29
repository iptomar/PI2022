<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    $altura = 0.0 ;
    do{
        echo  "Altura : " ;
        $altura = floatval(isset($_POST["altura"])? $_POST["altura"] : isset($_GET["altura"]) ? $_GET["altura"] : 0);
        
        echo $altura . "<br/>";// print input 
    }while($altura < 0.2 || $altura > 3.0 );
    echo  "Altura = " . $altura  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Thu, 2022 Sep 29 12:17

?>