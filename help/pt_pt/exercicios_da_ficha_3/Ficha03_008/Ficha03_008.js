// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Valor de X\t: " );// print text
    x = parseFloat(prompt("Valor de X\t: " ,"0.0") );
    
    document.write(x + "\n");// print input 
    var logX = 1/Math.log(10)*Math.log( x ) ;
    document.write("\nLogaritmo 10 \t= " + logX );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:30
