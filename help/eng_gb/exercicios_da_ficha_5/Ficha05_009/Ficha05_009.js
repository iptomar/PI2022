// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Minimo : " );// print text
    imin = parseInt(prompt("Minimo : " ,"0") );
    
    document.write(imin + "\n");// print input 
    document.write("Maximo : " );// print text
    imax = parseInt(prompt("Maximo : " ,"0") );
    
    document.write(imax + "\n");// print input 
    if(imin % 2 != 0 ){
        imin++;
    }
    for( var i = imin; i < imax + 1; i = i + 2 ) {
        document.write(i + " " );
    }
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Sep 24 22:05
