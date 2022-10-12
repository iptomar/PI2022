// Programador           -

//Main Function
function main() {
    document.write("Altura : " );// print text
    altura = parseInt(prompt("Altura : " ,"0") );
    
    document.write(altura + "\n");// print input 
    document.write("Caractér : " );// print text
    c = prompt("Caractér : " ,"");
    
    document.write(c + "\n");// print input 
    trianguloC(altura , c ) ;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
function linhaC(n, c) {
    for( var i = 0; i < n; i = i + 1 ) {
        document.write(c );
    }
    document.write("\n" );
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
function trianguloC(altura, c) {
    for( var i = 0; i < altura; i = i + 1 ) {
        linhaC(altura - i , c ) ;
    }
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:13
