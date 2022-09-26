// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("\n4 + 2 * 3 ^ 2 - 1\t= " );
    document.write(4 + 2 * parseInt( Math.pow( 3 , 2 ) ) - 1 );
    document.write("\n2 + 3 > 2 ^ 2  \t= " );
    document.write(2 + 3 > parseInt( Math.pow( 2 , 2 ) ) );
    document.write("\n2 < 3 && 4 >= 2 \t= " + ( 2 < 3 && 4 >= 2 ) );
    document.write("\n2 > 3 || !(4 == 2) \t= " + ( 2 > 3 || ! ( 4 == 2 ) ) );
    var var = true && ! false || 2 > 3 ;
    document.write("\n_T && ! _F || 2 > 3 \t= " + var );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:33
