// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("integer number\t: " );// print text
    n1 = parseInt(prompt("integer number\t: " ,"0") );
    
    document.write(n1 + "\n");// print input 
    document.write("real number \t: " );// print text
    n2 = parseFloat(prompt("real number \t: " ,"0.0") );
    
    document.write(n2 + "\n");// print input 
    document.write("Ordered Numbers" );
    document.write("\n" + Math.min( n1 , n2 ) );
    document.write("\n" + Math.max( n1 , n2 ) );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:57
