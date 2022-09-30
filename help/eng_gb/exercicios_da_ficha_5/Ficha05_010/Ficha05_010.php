<?php
// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    $minimum = 999 ;
    for( $i = 1; $i < 6; $i = $i + 1 ) {
        echo $i  .  "º grade : " ;
        grade = intval(isset($_POST["grade"])? $_POST["grade"] : isset($_GET["grade"]) ? $_GET["grade"] : 0);
        
        echo grade . "<br/>";// print input 
        if(grade < $minimum ){
            $minimum = grade ;
        }
    }
    echo  "Nota mínima = " . $minimum  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	Sat, 2022 Sep 24 22:05

?>