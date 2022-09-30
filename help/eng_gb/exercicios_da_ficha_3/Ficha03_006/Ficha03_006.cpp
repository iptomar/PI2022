// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha03_006 {

    public:
        int main() {
            cout << "Pythagorean Theorem\n";
            cout << "Catet a \t: ";
            float a;
            cin >> a;
            cout << "Catet b \t: ";
            float b;
            cin >> b;
            float c  = pow( pow( a , 2 ) + pow( b , 2 ) , 0.5 ) ;
            cout << "Hypotnusa \t: " << c ;
            return 0;
        }
};// end of class Ficha03_006
// Execute main function
int main(){
    Ficha03_006 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:56
