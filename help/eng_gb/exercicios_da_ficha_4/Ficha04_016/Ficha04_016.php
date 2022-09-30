<?php
// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Grade     : " ;
    $grade = intval(isset($_POST["grade"])? $_POST["grade"] : isset($_GET["grade"]) ? $_GET["grade"] : 0);
    
    echo $grade . "<br/>";// print input 
    if($grade >= 0 && $grade <= 20 ){
        echo  "Valid Grade" ;
    }else{
        echo  "Invalid Grade" ;
    }
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	domingo, 2022 set 18 23:29

?>