// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    var altura = 0.0 ;
    do{
        document.write("Altura : " );
        document.write();// print text
        altura = parseFloat(prompt("altura","0.0") );
        
        document.write(altura + "\n");// print input 
    }while(altura < 0.2 || altura > 3.0 );
    document.write("Altura = " + altura );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:17
