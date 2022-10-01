// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Fibonaci sequence sum\n " );
    var f0 = 1 ;
    var f1 = 1 ;
    document.write(f0 + " " + f1 );
    var sum = 2 ;
    while(f0 + f1 < 100 ){
        var fn = f0 + f1 ;
        sum +=fn;
        document.write(" " + fn );
        f1 = f0 ;
        f0 = fn ;
    }
    document.write("\nSum = " + sum );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:11
