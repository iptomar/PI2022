<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Número real     : " ;
    $r1 = floatval(isset($_POST["r1"])? $_POST["r1"] : isset($_GET["r1"]) ? $_GET["r1"] : 0);
    
    echo $r1 . "<br/>";// print input 
    echo  "Número real     : " ;
    $r2 = floatval(isset($_POST["r2"])? $_POST["r2"] : isset($_GET["r2"]) ? $_GET["r2"] : 0);
    
    echo $r2 . "<br/>";// print input 
    echo  "Soma real     : " ;
    $r3 = floatval(isset($_POST["r3"])? $_POST["r3"] : isset($_GET["r3"]) ? $_GET["r3"] : 0);
    
    echo $r3 . "<br/>";// print input 
    $soma = $r1 + $r2 ;
    $distancia = abs( $soma - $r3 ) ;
    $precisao = 1.0E-5 ;
    echo $r1  .  " + " . $r2  .  "     = " . $r3  .  " => " ;
    if($distancia < $precisao ){
        echo  "Verdadeiro" ;
    }else{
        echo  "Falso" ;
    }
    echo  "\n\n" . $r1  .  " + " . $r2  .  "     = " . ( ( $r1 + $r2 )  ) ;
    echo  "\nDistância     : " . $distancia  ;
    echo  "\nPrecisão     : " . $precisao  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 15:32

?>