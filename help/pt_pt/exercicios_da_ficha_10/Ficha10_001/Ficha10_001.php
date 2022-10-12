<?php
// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    $i = 0 ;
    while(true ){
        echo  "Número positvo : " ;
        $i = intval(isset($_POST["i"])? $_POST["i"] : isset($_GET["i"]) ? $_GET["i"] : 0);
        
        echo $i . "<br/>";// print input 
        if($i > 0 ){
            break;
        }
        echo  "Erro na leitura\n\n" ;
    }
    echo  "Valor introduzido = " . $i  ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	quarta, 2022 out 12 19:26

?>