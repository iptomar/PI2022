// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    document.write("x : " );// print text
    x = parseFloat(prompt("x : " ,"0.0") );
    
    document.write(x + "\n");// print input 
    document.write("g(" + x + ")= " );
    if(x < 1 ){
        x = - Math.pow( x , 2 ) + 1 ;
    }else{
        x--;
    }
    document.write(x );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:14