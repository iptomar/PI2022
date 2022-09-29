// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Numero : " );// print text
    num = parseInt(prompt("Numero : " ,"0") );
    
    document.write(num + "\n");// print input 
    var i = 1 ;
    document.write("Divisores : " );
    while(i < num ){
        if(num % i == 0 ){
            document.write(i + " " );
        }
        i++;
    }
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:27
