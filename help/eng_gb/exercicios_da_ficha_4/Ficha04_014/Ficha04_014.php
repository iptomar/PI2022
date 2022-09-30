<?php
// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Truth table of OR\n" ;
    $var = true || true ;
    echo  "\n" . true  .  "    ||    " . true  .  "    = " . $var  ;
    $var = true || false ;
    echo  "\n" . true  .  "    ||    " . false  .  "        = " . $var  ;
    $var = false || true ;
    echo  "\n" . false  .  "        ||    " . true  .  "    = " . $var  ;
    echo  "\n" . false  .  "        ||    " . false  .  "        = " . ( ( false || false )  ) ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	domingo, 2022 set 18 23:28

?>