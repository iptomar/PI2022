// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Limite inferior : " );// print text
    inf = parseInt(prompt("Limite inferior : " ,"0") );
    
    document.write(inf + "\n");// print input 
    document.write("Limite superior : " );// print text
    sup = parseInt(prompt("Limite superior : " ,"0") );
    
    document.write(sup + "\n");// print input 
    while(inf <= sup ){
        if(inf % 2 != 0 ){
            document.write(inf + " " );
        }
        inf++;
    }
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:24
