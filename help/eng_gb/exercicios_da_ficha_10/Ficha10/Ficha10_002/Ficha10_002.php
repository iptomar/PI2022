<?php
// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    for( $i = 1; $i < 21; $i = $i + 1 ) {
        if($i % 3 == 0 ){
            continue;
        }
        echo $i  .  " " ;
    }
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	quarta, 2022 out 12 19:32

?>