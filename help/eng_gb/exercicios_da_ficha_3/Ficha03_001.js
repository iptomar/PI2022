// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Base \t\t: " );// print text
    base = parseFloat(prompt("Base \t\t: " ,"0.0") );
    
    document.write(base + "\n");// print input 
    document.write("Exponent  \t: " );// print text
    expo = parseFloat(prompt("Exponent  \t: " ,"0.0") );
    
    document.write(expo + "\n");// print input 
    document.write("\nPotency \t= " + Math.pow( base , expo ) );
    document.write("\nOperator \t= " + Math.pow( base , expo ) );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:54
