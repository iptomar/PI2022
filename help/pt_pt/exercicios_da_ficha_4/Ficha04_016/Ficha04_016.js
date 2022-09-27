// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Nota \t: " );// print text
    nota = parseInt(prompt("Nota \t: " ,"0") );
    
    document.write(nota + "\n");// print input 
    if(nota >= 0 && nota <= 20 ){
        document.write("Nota válida" );
    }else{
        document.write("Nota inválida" );
    }
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:32
