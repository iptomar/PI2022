// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Decimal : " );// print text
    num = parseInt(prompt("Decimal : " ,"0") );
    
    document.write(num + "\n");// print input 
    var binary = "" ;
    while(num > 0 ){
        binary = num % 2 + binary ;
        num /=2;
    }
    document.write("Binary = " + binary );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:12
