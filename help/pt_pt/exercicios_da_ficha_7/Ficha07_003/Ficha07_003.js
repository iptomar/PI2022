// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Somatório Fórmula\n" );
    var soma = 0 ;
    for( var i = 1; i < 6; i = i + 1 ) {
        var f = 2 * i - 1 ;
        document.write(soma + " + " + f );
        soma +=f;
        document.write(" \t= " + soma + "\n" );
    }
    document.write("\nSoma = " + soma );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:13
