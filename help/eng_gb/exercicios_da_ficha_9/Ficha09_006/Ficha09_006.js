// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("Inferior limit : " );// print text
    inf = parseInt(prompt("Inferior limit : " ,"0") );
    
    document.write(inf + "\n");// print input 
    if(inf % 2 == 0 ){
        inf++;
    }
    document.write("Upper limit : " );// print text
    sup = parseInt(prompt("Upper limit : " ,"0") );
    
    document.write(sup + "\n");// print input 
    while(inf <= sup ){
        document.write(inf + " " );
        inf +=2;
    }
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:11
