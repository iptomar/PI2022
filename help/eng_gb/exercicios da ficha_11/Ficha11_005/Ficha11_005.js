// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    line() ;
    document.write("Numbers between 1 and 5\n" );
    line() ;
    for( var i = 1; i < 6; i = i + 1 ) {
        document.write(i + "\n" );
    }
    line() ;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
function line() {
    for( var i = 0; i < 20; i = i + 1 ) {
        document.write("*" );
    }
    document.write("\n" );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:22
