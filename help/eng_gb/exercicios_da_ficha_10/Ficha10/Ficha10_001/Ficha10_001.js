// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    var i = 0 ;
    while(true ){
        document.write("Positive number : " );
        document.write();// print text
        i = parseInt(prompt("i","0") );
        
        document.write(i + "\n");// print input 
        if(i > 0 ){
            break
        }
        document.write("Error in reading\n\n" );
    }
    document.write("Entered value = " + i );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 19:32
