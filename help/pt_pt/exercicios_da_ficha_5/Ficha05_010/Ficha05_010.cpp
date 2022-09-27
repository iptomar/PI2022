// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha05_010 {

    public:
        int main() {
            int minimo  = 999 ;
            int i  = 0 ;
            for( int i = 1; i < 6; i = i + 1 ) {
                cout << i  << "º nota : ";
                int nota;
                cin >> nota;
                if(nota < minimo ){
                    minimo = nota ;
                }
            }
            cout << "Nota mínima = " << minimo ;
            return 0;
        }
};// end of class Ficha05_010
// Execute main function
int main(){
    Ficha05_010 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:04
