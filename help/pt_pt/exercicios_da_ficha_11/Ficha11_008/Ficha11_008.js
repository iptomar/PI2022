// Programador           -

//Main Function
function main() {
    document.write("Altura : " );// print text
    altura = parseInt(prompt("Altura : " ,"0") );
    
    document.write(altura + "\n");// print input 
    for( var i = 1; i < altura + 1; i = i + 1 ) {
        linha(i ) ;
    }
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
function linha(n) {
    for( var i = 0; i < n; i = i + 1 ) {
        document.write("*" );
    }
    document.write("\n" );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:09
