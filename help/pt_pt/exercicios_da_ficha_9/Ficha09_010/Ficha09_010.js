// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Numero : " );// print text
    num = parseInt(prompt("Numero : " ,"0") );
    
    document.write(num + "\n");// print input 
    document.write("Digitos = " );
    while(num > 0 ){
        document.write(num % 10 + " " );
        num /=10;
    }
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:25
