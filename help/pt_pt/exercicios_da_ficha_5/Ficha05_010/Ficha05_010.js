// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    var minimo = 999 ;
    for( var i = 1; i < 6; i = i + 1 ) {
        document.write(i + "º nota : " );// print text
        nota = parseInt(prompt(i + "º nota : " ,"0") );
        
        document.write(nota + "\n");// print input 
        if(nota < minimo ){
            minimo = nota ;
        }
    }
    document.write("Nota mínima = " + minimo );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:04
