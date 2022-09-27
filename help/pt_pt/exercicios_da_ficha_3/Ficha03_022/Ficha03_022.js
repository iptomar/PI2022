// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Ângulo \t\t\t: " );// print text
    ang = parseFloat(prompt("Ângulo \t\t\t: " ,"0.0") );
    
    document.write(ang + "\n");// print input 
    document.write("Seno hiperbólico \t= " + Math.sinh( ang ) + "\n" );
    document.write("Coseno hiperbólico \t= " + Math.cosh( ang ) + "\n" );
    document.write("Tangente hiperbólica \t= " + Math.tanh( ang ) );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:33
