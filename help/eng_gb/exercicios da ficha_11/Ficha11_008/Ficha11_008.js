// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("height : " );// print text
    Height = parseInt(prompt("height : " ,"0") );
    
    document.write(Height + "\n");// print input 
    for( var i = 1; i < Height + 1; i = i + 1 ) {
        line(i ) ;
    }
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
function line(n) {
    for( var i = 0; i < n; i = i + 1 ) {
        document.write("*" );
    }
    document.write("\n" );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:22
