<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    $minimo = 999 ;
    for( $i = 1; $i < 6; $i = $i + 1 ) {
        echo $i  .  "º nota : " ;
        nota = intval(isset($_POST["nota"])? $_POST["nota"] : isset($_GET["nota"]) ? $_GET["nota"] : 0);
        
        echo nota . "<br/>";// print input 
        if(nota < $minimo ){
            $minimo = nota ;
        }
    }
    echo  "Nota mínima = " . $minimo  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 16:04

?>