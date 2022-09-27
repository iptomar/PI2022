// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha03_007 {

    public:
        int main() {
            cout << "Teorema de Pitágoras\n";
            cout << "Cateto a \t: ";
            float a;
            cin >> a;
            cout << "Cateto b \t: ";
            float b;
            cin >> b;
            float c  = sqrt( pow( a , 2 ) + pow( b , 2 ) ) ;
            cout << "Hipotnusa \t: " << c ;
            return 0;
        }
};// end of class Ficha03_007
// Execute main function
int main(){
    Ficha03_007 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:29
