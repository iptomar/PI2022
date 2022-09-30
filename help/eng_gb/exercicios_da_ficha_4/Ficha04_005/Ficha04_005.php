<?php
// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Number     : " ;
    $num = intval(isset($_POST["num"])? $_POST["num"] : isset($_GET["num"]) ? $_GET["num"] : 0);
    
    echo $num . "<br/>";// print input 
    if($num == 0 ){
        echo  "Null" ;
    }else{
        if($num > 0 ){
            echo  "Positive" ;
        }else{
            echo  "Negative" ;
        }
    }
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	domingo, 2022 set 18 23:27

?>