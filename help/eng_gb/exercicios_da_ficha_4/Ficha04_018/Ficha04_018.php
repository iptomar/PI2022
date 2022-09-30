<?php
// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "\n4 + 2 * 3 ^ 2 - 1    = " ;
    echo ( 4 + 2 * 3 ^ 2 - 1  ) ;
    echo  "\n2 + 3 > 2 ^ 2      = " ;
    echo ( 2 + 3 > 2 ^ 2  ) ;
    echo  "\n2 < 3 && 4 >= 2     = " . ( ( 2 < 3 && 4 >= 2 )  ) ;
    echo  "\n2 > 3 || !(4 == 2)     = " . ( ( 2 > 3 || ! ( 4 == 2 ) )  ) ;
    $var = true && ! false || 2 > 3 ;
    echo  "\n_T && ! _F || 2 > 3     = " . $var  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	domingo, 2022 set 18 23:29

?>