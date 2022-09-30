// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Height : " );// print text
    height = parseInt(prompt("Height : " ,"0") );
    
    document.write(height + "\n");// print input 
    for( var i = 0; i < height; i = i + 1 ) {
        for( var j = 0; j < height; j = j + 1 ) {
            document.write("*" );
        }
        document.write("\n" );
    }
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 21:55
