// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Número \t: " );// print text
    num = parseInt(prompt("Número \t: " ,"0") );
    
    document.write(num + "\n");// print input 
    if(num == 0 ){
        document.write("Nulo" );
    }else{
        if(num > 0 ){
            document.write("Positivo" );
        }else{
            document.write("Negativo" );
        }
    }
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:31
