// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Minimo : " );// print text
    imin = parseInt(prompt("Minimo : " ,"0") );
    
    document.write(imin + "\n");// print input 
    document.write("Maximo : " );// print text
    imax = parseInt(prompt("Maximo : " ,"0") );
    
    document.write(imax + "\n");// print input 
    for( var i = imin; i < imax + 1; i = i + 1 ) {
        if(i % 2 == 0 ){
            document.write(i + " " );
        }
    }
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:03
