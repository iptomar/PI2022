<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Tabela de verdade do OU\n" ;
    $var = $true || $true ;
    echo  "\n" . $true  .  "    ||    " . $true  .  "    = " . $var  ;
    $var = $true || $false ;
    echo  "\n" . $true  .  "    ||    " . $false  .  "        = " . $var  ;
    $var = $false || $true ;
    echo  "\n" . $false  .  "        ||    " . $true  .  "    = " . $var  ;
    echo  "\n" . $false  .  "        ||    " . $false  .  "        = " . ( ( $false || $false )  ) ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 15:32

?>