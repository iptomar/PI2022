// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Minimum : " );// print text
    imin = parseInt(prompt("Minimum : " ,"0") );
    
    document.write(imin + "\n");// print input 
    document.write("Maximum : " );// print text
    imax = parseInt(prompt("Maximum : " ,"0") );
    
    document.write(imax + "\n");// print input 
    for( var i = imin; i < imax + 1; i = i + 1 ) {
        if(i % 2 == 0 ){
            document.write(i + " " );
        }
    }
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Sep 24 22:05
