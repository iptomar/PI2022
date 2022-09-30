// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Angle \t\t\t: " );// print text
    ang = parseFloat(prompt("Angle \t\t\t: " ,"0.0") );
    
    document.write(ang + "\n");// print input 
    document.write("Hyperbolic sine \t= " + Math.sinh( ang ) + "\n" );
    document.write("Hyperbolic Cosine \t= " + Math.cosh( ang ) + "\n" );
    document.write("Hyperbolic tangent \t= " + Math.tanh( ang ) );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:59
