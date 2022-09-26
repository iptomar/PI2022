// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Número real \t: " );// print text
    r1 = parseFloat(prompt("Número real \t: " ,"0.0") );
    
    document.write(r1 + "\n");// print input 
    document.write("Número real \t: " );// print text
    r2 = parseFloat(prompt("Número real \t: " ,"0.0") );
    
    document.write(r2 + "\n");// print input 
    document.write("Soma real \t: " );// print text
    r3 = parseFloat(prompt("Soma real \t: " ,"0.0") );
    
    document.write(r3 + "\n");// print input 
    var soma = r1 + r2 ;
    var distancia = Math.abs( soma - r3 ) ;
    var precisao = 1.0E-5 ;
    document.write(r1 + " + " + r2 + " \t= " + r3 + " => " );
    if(distancia < precisao ){
        document.write("Verdadeiro" );
    }else{
        document.write("Falso" );
    }
    document.write("\n\n" + r1 + " + " + r2 + " \t= " + ( r1 + r2 ) );
    document.write("\nDistância \t: " + distancia );
    document.write("\nPrecisão \t: " + precisao );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:32
