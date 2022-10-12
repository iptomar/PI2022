// Programador           -

//Main Function
function main() {
    document.write("Altura   : " );// print text
    altura = parseInt(prompt("Altura   : " ,"0") );
    
    document.write(altura + "\n");// print input 
    document.write("Largura  : " );// print text
    largura = parseInt(prompt("Largura  : " ,"0") );
    
    document.write(largura + "\n");// print input 
    document.write("Limite   : " );// print text
    limite = prompt("Limite   : " ,"");
    
    document.write(limite + "\n");// print input 
    document.write("Interior : " );// print text
    interior = prompt("Interior : " ,"");
    
    document.write(interior + "\n");// print input 
    caixa(largura , altura , limite , interior ) ;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
function linha(n, c) {
    for( var i = 0; i < n; i = i + 1 ) {
        document.write(c );
    }
    document.write("\n" );
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
function interior(n, cl, ci) {
    document.write(cl );
    for( var i = 1; i < n - 1; i = i + 1 ) {
        document.write(ci );
    }
    document.write(cl + "\n" );
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
function caixa(larg, alt, cl, ci) {
    linha(larg , cl ) ;
    for( var i = 1; i < alt - 1; i = i + 1 ) {
        interior(larg , cl , ci ) ;
    }
    linha(larg , cl ) ;
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:14
