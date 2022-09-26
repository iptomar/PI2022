// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Tabela de verdade do OU\n" );
    var var = true || true ;
    document.write("\n" + true + "\t||\t" + true + "\t= " + var );
    var = true || false ;
    document.write("\n" + true + "\t||\t" + false + "\t\t= " + var );
    var = false || true ;
    document.write("\n" + false + "\t\t||\t" + true + "\t= " + var );
    document.write("\n" + false + "\t\t||\t" + false + "\t\t= " + ( false || false ) );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:32
