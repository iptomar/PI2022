// Programador           -

//Main Function
function main() {
    document.write("Altura  : " );// print text
    altura = parseInt(prompt("Altura  : " ,"0") );
    
    document.write(altura + "\n");// print input 
    document.write("Largura : " );// print text
    largura = parseInt(prompt("Largura : " ,"0") );
    
    document.write(largura + "\n");// print input 
    caixa(largura , altura ) ;
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
//::::::::::::::::::::::::::::::::::::::::::::::::::
function interior(n) {
    document.write("*" );
    for( var i = 1; i < n - 1; i = i + 1 ) {
        document.write(" " );
    }
    document.write("*\n" );
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
function caixa(larg, alt) {
    linha(larg ) ;
    for( var i = 1; i < alt - 1; i = i + 1 ) {
        interior(larg ) ;
    }
    linha(larg ) ;
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:13
