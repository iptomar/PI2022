<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Nota     : " ;
    $nota = intval(isset($_POST["nota"])? $_POST["nota"] : isset($_GET["nota"]) ? $_GET["nota"] : 0);
    
    echo $nota . "<br/>";// print input 
    if($nota >= 0 && $nota <= 20 ){
        echo  "Nota válida" ;
    }else{
        echo  "Nota inválida" ;
    }
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 15:32

?>