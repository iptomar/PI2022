<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "\n" . $true  .  "    &&    " . $true  .  "    = " . ( ( $true && $true )  ) ;
    echo  "\n" . $true  .  "    &&    " . $false  .  "        = " . ( ( $true && $false )  ) ;
    echo  "\n" . $false  .  "        &&    " . $true  .  "    = " . ( ( $false && $true )  ) ;
    echo  "\n" . $false  .  "        &&    " . $false  .  "        = " . ( ( $false && $false )  ) ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Mon, 2022 Sep 26 15:32

?>