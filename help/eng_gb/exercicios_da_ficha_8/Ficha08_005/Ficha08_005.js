// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    var height = 0.0 ;
    do{
        document.write("Height : " );
        document.write();// print text
        height = parseFloat(prompt("height","0.0") );
        
        document.write(height + "\n");// print input 
    }while(height < 0.2 || height > 3.0 );
    document.write("Height = " + height );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 23:15
