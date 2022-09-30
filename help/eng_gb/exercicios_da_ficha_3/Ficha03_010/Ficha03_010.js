// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Value of X\t\t: " );// print text
    x = parseFloat(prompt("Value of X\t\t: " ,"0.0") );
    
    document.write(x + "\n");// print input 
    var logX = 1/Math.log(10)*Math.log( x ) ;
    document.write("Log10(X) \t\t= " + logX );
    var pow10 = Math.pow( 10 , logX ) ;
    document.write("\nPow10(Log10(X)) \t= " + pow10 );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:56
