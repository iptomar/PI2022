// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Check if the sum of two real values" );
    document.write("\nis equal to a third\n" );
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
        document.write("True" );
    }else{
        document.write("False" );
    }
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:28
