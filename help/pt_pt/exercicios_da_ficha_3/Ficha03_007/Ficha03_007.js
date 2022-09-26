// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Teorema de Pitágoras\n" );
    document.write("Cateto a \t: " );
    document.write();// print text
    a = parseFloat(prompt("a","0.0") );
    
    document.write(a + "\n");// print input 
    document.write("Cateto b \t: " );
    document.write();// print text
    b = parseFloat(prompt("b","0.0") );
    
    document.write(b + "\n");// print input 
    var c = Math.sqrt( Math.pow( a , 2 ) + Math.pow( b , 2 ) ) ;
    document.write("Hipotnusa \t: " + c );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:29
