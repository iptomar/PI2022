// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha07_004 {

    public:
        int main() {
            cout << "Somatório Pares [0,10]\n";
            int soma  = 0 ;
            int i  = 0 ;
            for( int i = 1; i < 6; i = i + 1 ) {
                int f  = 2 * i ;
                cout << soma  << " + " << f ;
                soma +=f;
                cout << " = " << soma  << "\n";
            }
            cout << "\nSoma = " << soma ;
            return 0;
        }
};// end of class Ficha07_004
// Execute main function
int main(){
    Ficha07_004 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:13
