// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Teorema de Pitágoras\n" );
    document.write("Cateto a \t: " );// print text
    a = parseFloat(prompt("Cateto a \t: " ,"0.0") );
    
    document.write(a + "\n");// print input 
    document.write("Cateto b \t: " );// print text
    b = parseFloat(prompt("Cateto b \t: " ,"0.0") );
    
    document.write(b + "\n");// print input 
    var c = Math.pow( Math.pow( a , 2 ) + Math.pow( b , 2 ) , 0.5 ) ;
    document.write("Hipotnusa \t: " + c );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:29
