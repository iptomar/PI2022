// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Grade \t: " );// print text
    grade = parseInt(prompt("Grade \t: " ,"0") );
    
    document.write(grade + "\n");// print input 
    if(grade >= 0 && grade <= 20 ){
        document.write("Valid Grade" );
    }else{
        document.write("Invalid Grade" );
    }
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:29
