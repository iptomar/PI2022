<?php
// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Valor de X    : " ;
    $x = floatval(isset($_POST["x"])? $_POST["x"] : isset($_GET["x"]) ? $_GET["x"] : 0);
    
    echo $x . "<br/>";// print input 
    echo  "\nRaiz         = " . ( sqrt( $x )  ) ;
    echo  "\nPotência     = " . ( pow( $x , 0.5 )  ) ;
    echo  "\nOperador     = " . ( $x ^ 0.5  ) ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	quarta, 2022 out 05 20:25

?>