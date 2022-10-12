// Programador           -

//Main Function
function main() {
    var alt = 0 ;
    while(true ){
        document.write("Altura   : " );// print text
        alt = parseInt(prompt("Altura   : " ,"0") );
        
        document.write(alt + "\n");// print input 
        if(alt % 2 == 0 && alt >= 4 ){
            break
        }
        document.write("\tValor errado\n" );
    }
    document.write("Caractér : " );// print text
    txt = prompt("Caractér : " ,"");
    
    document.write(txt + "\n");// print input 
    copa(alt / 2 , txt ) ;
    tronco(alt / 2 , txt ) ;
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
function tronco(n, ch) {
    for( var i = 0; i < n; i = i + 1 ) {
        for( var j = 0; j < n - 1; j = j + 1 ) {
            document.write(" " );
        }
        document.write(ch + "\n" );
    }
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:17
