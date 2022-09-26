// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("1º número :" );// print text
    n1 = parseInt(prompt("1º número :" ,"0") );
    
    document.write(n1 + "\n");// print input 
    document.write("2º número :" );// print text
    n2 = parseInt(prompt("2º número :" ,"0") );
    
    document.write(n2 + "\n");// print input 
    document.write(n1 + " + " + n2 + " = " + ( n1 + n2 ) );
    document.write("\n" + n1 + " - " + n2 + " = " + ( n1 - n2 ) );
    document.write("\n" + n1 + " * " + n2 + " = " + ( n1 * n2 ) );
    document.write("\n" + n1 + " / " + n2 + " = " + ( n1 / n2 ) );
    document.write("\n" + n1 + " % " + n2 + " = " + ( n1 % n2 ) );
    document.write("\n" + n1 + " ^ " + n2 + " = " + ( parseInt( Math.pow( n1 , n2 ) ) ) );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 set 07 16:11
