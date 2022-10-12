// Programador           -

//Main Function
function main() {
    document.write("Copas    : " );// print text
    copas = parseInt(prompt("Copas    : " ,"0") );
    
    document.write(copas + "\n");// print input 
    document.write("Altura   : " );// print text
    alt = parseInt(prompt("Altura   : " ,"0") );
    
    document.write(alt + "\n");// print input 
    document.write("Caractér : " );// print text
    char = prompt("Caractér : " ,"");
    
    document.write(char + "\n");// print input 
    pinheiro(copas , alt , char ) ;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::
//User Defined Functions Code
//::::::::::::::::::::::::::::::::::::::::::::::::::
function linhaCopa(sp, chars, txt) {
    for( var i = 0; i < sp; i = i + 1 ) {
        document.write(" " );
    }
    for( var i = 0; i < chars; i = i + 1 ) {
        document.write(txt );
    }
    document.write("\n" );
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
function copa(alt, txt) {
    for( var i = 1; i < alt + 1; i = i + 1 ) {
        var sp = alt - i ;
        var chrs1 = i * 2 - 1 ;
        linhaCopa(sp , chrs1 , txt ) ;
    }
}
//::::::::::::::::::::::::::::::::::::::::::::::::::
function pinheiro(c, n, txt) {
    for( var i = 0; i < c; i = i + 1 ) {
        copa(n , txt ) ;
    }
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:16
