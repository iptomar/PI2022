// Programador           -

//Main Function
function main() {
    linha() ;
    document.write("Numeros entre 1 e 5\n" );
    linha() ;
    for( var i = 1; i < 6; i = i + 1 ) {
        document.write(i + "\n" );
    }
    linha() ;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
function linha() {
    for( var i = 0; i < 20; i = i + 1 ) {
        document.write("*" );
    }
    document.write("\n" );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:09
