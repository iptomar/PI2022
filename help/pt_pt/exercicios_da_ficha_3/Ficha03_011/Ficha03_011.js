// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Número inteiro\t: " );// print text
    n1 = parseInt(prompt("Número inteiro\t: " ,"0") );
    
    document.write(n1 + "\n");// print input 
    document.write("Número real \t: " );// print text
    n2 = parseFloat(prompt("Número real \t: " ,"0.0") );
    
    document.write(n2 + "\n");// print input 
    document.write("Números Ordenados" );
    document.write("\n" + Math.min( n1 , n2 ) );
    document.write("\n" + Math.max( n1 , n2 ) );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:30
