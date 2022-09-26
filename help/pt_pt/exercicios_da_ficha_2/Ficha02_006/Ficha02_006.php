<?php
// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    echo  "Qual o seu nome     : " ;
    $nome = isset($_POST["$nome"])? $_POST["$nome"] : isset($_GET["$nome"]) ? $_GET["$nome"] : 0;
    echo $nome . "<br/>";// print input 
    echo  "Qual a sua idade     : " ;
    $idade = intval(isset($_POST["idade"])? $_POST["idade"] : isset($_GET["idade"]) ? $_GET["idade"] : 0);
    
    echo $idade . "<br/>";// print input 
    echo  "Olá " . $nome  ;
    echo  " de " . $idade  .  " anos" ;
}

main();

//PHP 5.3 +  - Automatic translated by Algorithmi 22.05
//(c) Luís Lopes 	quarta, 2022 set 07 16:09

?>