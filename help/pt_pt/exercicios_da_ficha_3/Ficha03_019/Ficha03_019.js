// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Ângulo (rad) \t: " );// print text
    ang = parseFloat(prompt("Ângulo (rad) \t: " ,"0.0") );
    
    document.write(ang + "\n");// print input 
    document.write("Seno \t\t= " + Math.sin( ang ) + "\n" );
    document.write("Coseno \t\t= " + Math.cos( ang ) + "\n" );
    document.write("Tangente \t= " + Math.tan( ang ) );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:32
