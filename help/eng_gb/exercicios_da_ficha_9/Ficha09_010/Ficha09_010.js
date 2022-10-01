// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Number : " );// print text
    num = parseInt(prompt("Number : " ,"0") );
    
    document.write(num + "\n");// print input 
    document.write("Digits = " );
    while(num > 0 ){
        document.write(num % 10 + " " );
        num /=10;
    }
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:12
