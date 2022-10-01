// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Formula Summation\n" );
    var sum = 0 ;
    for( var i = 1; i < 6; i = i + 1 ) {
        var f = 2 * i - 1 ;
        document.write(sum + " + " + f );
        sum +=f;
        document.write(" \t= " + sum + "\n" );
    }
    document.write("\nSum= " + sum );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 22:36
