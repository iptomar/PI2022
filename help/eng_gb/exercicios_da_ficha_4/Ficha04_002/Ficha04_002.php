<?php
// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "First value     : " ;
    $n1 = intval(isset($_POST["n1"])? $_POST["n1"] : isset($_GET["n1"]) ? $_GET["n1"] : 0);
    
    echo $n1 . "<br/>";// print input 
    echo  "Second value         : " ;
    $n2 = intval(isset($_POST["n2"])? $_POST["n2"] : isset($_GET["n2"]) ? $_GET["n2"] : 0);
    
    echo $n2 . "<br/>";// print input 
    $equal = $n1 == $n2 ;
    echo  "\n" . $n1  .  "    ==    " . $n2  .  "    =    " . $equal  ;
    $different = $n1 != $n2 ;
    echo  "\n" . $n1  .  "    !=    " . $n2  .  "    =    " . $different  ;
    $compare = $n1 > $n2 ;
    echo  "\n" . $n1  .  "    >    " . $n2  .  "    =    " . $compare  ;
    $compare = $n1 >= $n2 ;
    echo  "\n" . $n1  .  "    >=    " . $n2  .  "    =    " . $compare  ;
    echo  "\n" . $n1  .  "    <    " . $n2  .  "    =    " . ( ( $n1 < $n2 )  ) ;
    echo  "\n" . $n1  .  "    <=    " . $n2  .  "    =    " . ( ( $n1 <= $n2 )  ) ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	domingo, 2022 set 18 23:27

?>