// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Number of terms : " );// print text
    n = parseInt(prompt("Number of terms : " ,"0") );
    
    document.write(n + "\n");// print input 
    var product = 1 ;
    for( var i = 1; i < n + 1; i = i + 1 ) {
        var f = 2 * i - 1 ;
        product *=f;
    }
    document.write("Result = " + product );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 22:37
