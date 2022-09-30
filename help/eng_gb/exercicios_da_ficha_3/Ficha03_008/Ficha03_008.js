// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Value of X\t: " );// print text
    x = parseFloat(prompt("Value of X\t: " ,"0.0") );
    
    document.write(x + "\n");// print input 
    var logX = 1/Math.log(10)*Math.log( x ) ;
    document.write("\nLogarithm 10 \t= " + logX );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:56
