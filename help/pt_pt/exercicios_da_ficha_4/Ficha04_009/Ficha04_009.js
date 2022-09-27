// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Verificar se a soma de dois valores reais" );
    document.write("\né igual a um terceiro\n" );
    document.write("Real 1 \t: " );// print text
    r1 = parseFloat(prompt("Real 1 \t: " ,"0.0") );
    
    document.write(r1 + "\n");// print input 
    document.write("Real 2 \t: " );// print text
    r2 = parseFloat(prompt("Real 2 \t: " ,"0.0") );
    
    document.write(r2 + "\n");// print input 
    document.write("Real 3 \t: " );// print text
    r3 = parseFloat(prompt("Real 3 \t: " ,"0.0") );
    
    document.write(r3 + "\n");// print input 
    document.write(r1 + " + " + r2 + " == " + r3 + " => " );
    if(r1 + r2 == r3 ){
        document.write("Verdadeiro" );
    }else{
        document.write("Falso" );
    }
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:32
