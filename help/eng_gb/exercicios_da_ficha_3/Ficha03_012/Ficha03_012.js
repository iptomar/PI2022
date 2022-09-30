// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Nome : " );// print text
    nome1 = prompt("Nome : " ,"");
    
    document.write(nome1 + "\n");// print input 
    document.write("Nome : " );// print text
    nome2 = prompt("Nome : " ,"");
    
    document.write(nome2 + "\n");// print input 
    document.write("Nomes Ordenados" );
    document.write("\n" + Math.min( nome1 , nome2 ) );
    document.write("\n" + Math.max( nome1 , nome2 ) );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:57
