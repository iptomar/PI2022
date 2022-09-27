// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Número de termos : " );// print text
    n = parseInt(prompt("Número de termos : " ,"0") );
    
    document.write(n + "\n");// print input 
    var produto = 1 ;
    for( var i = 1; i < n + 1; i = i + 1 ) {
        var f = Math.pow( i , 1.0 / 3 ) ;
        produto *=f;
    }
    document.write("Resultado = " + produto );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:13
