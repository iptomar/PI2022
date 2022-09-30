// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha03_010 {

    public:
        int main() {
            cout << "Value of X\t\t: ";
            float x;
            cin >> x;
            float logX  = log10( x ) ;
            cout << "Log10(X) \t\t= " << logX ;
            float pow10  = pow( 10 , logX ) ;
            cout << "\nPow10(Log10(X)) \t= " << pow10 ;
            return 0;
        }
};// end of class Ficha03_010
// Execute main function
int main(){
    Ficha03_010 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:56
