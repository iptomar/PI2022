// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Soma da sequência de fibonacci\n " );
    var f0 = 1 ;
    var f1 = 1 ;
    document.write(f0 + " " + f1 );
    var soma = 2 ;
    while(f0 + f1 < 100 ){
        var fn = f0 + f1 ;
        soma +=fn;
        document.write(" " + fn );
        f1 = f0 ;
        f0 = fn ;
    }
    document.write("\nSoma = " + soma );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:25
