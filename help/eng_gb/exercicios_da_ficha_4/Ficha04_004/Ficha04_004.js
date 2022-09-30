// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Number \t: " );// print text
    num = parseInt(prompt("Number \t: " ,"0") );
    
    document.write(num + "\n");// print input 
    if(num > 0 ){
        document.write("Positive" );
    }else{
        if(num == 0 ){
            document.write("Null" );
        }else{
            document.write("Negative" );
        }
    }
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:27
