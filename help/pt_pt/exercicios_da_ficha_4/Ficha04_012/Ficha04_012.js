// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Real 1 \t: " );// print text
    r1 = parseFloat(prompt("Real 1 \t: " ,"0.0") );
    
    document.write(r1 + "\n");// print input 
    document.write("Real 2 \t: " );// print text
    r2 = parseFloat(prompt("Real 2 \t: " ,"0.0") );
    
    document.write(r2 + "\n");// print input 
    document.write("\nOrdem decrescente\n" );
    if(r1 > r2 ){
        document.write(r1 + "\t" + r2 );
    }else{
        document.write(r2 + "\t" + r1 );
    }
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:32
