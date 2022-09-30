// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

//Main Function
function main() {
    var minimum = 999 ;
    for( var i = 1; i < 6; i = i + 1 ) {
        document.write(i + "º grade : " );// print text
        grade = parseInt(prompt(i + "º grade : " ,"0") );
        
        document.write(grade + "\n");// print input 
        if(grade < minimum ){
            minimum = grade ;
        }
    }
    document.write("Nota mínima = " + minimum );
}

//JavaScript  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Sep 24 22:05
