// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Pythagorean Theorem\n" );
    document.write("Catet a \t: " );// print text
    a = parseFloat(prompt("Catet a \t: " ,"0.0") );
    
    document.write(a + "\n");// print input 
    document.write("Catet b \t: " );// print text
    b = parseFloat(prompt("Catet b \t: " ,"0.0") );
    
    document.write(b + "\n");// print input 
    var c = Math.pow( Math.pow( a , 2 ) + Math.pow( b , 2 ) , 0.5 ) ;
    document.write("Hypotnusa \t: " + c );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:56
