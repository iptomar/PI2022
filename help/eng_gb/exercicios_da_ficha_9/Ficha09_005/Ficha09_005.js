// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Inferior limit : " );// print text
    inf = parseInt(prompt("Inferior limit : " ,"0") );
    
    document.write(inf + "\n");// print input 
    document.write("Upper limit : " );// print text
    sup = parseInt(prompt("Upper limit : " ,"0") );
    
    document.write(sup + "\n");// print input 
    while(inf <= sup ){
        if(inf % 2 != 0 ){
            document.write(inf + " " );
        }
        inf++;
    }
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:11