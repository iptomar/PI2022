// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha03_001 {

    public:
        int main() {
            cout << "Base \t\t: ";
            float base;
            cin >> base;
            cout << "Exponent  \t: ";
            float expo;
            cin >> expo;
            cout << "\nPotency \t= " <<( pow( base , expo )  );
            cout << "\nOperator \t= " <<( pow( base , expo )  );
            return 0;
        }
};// end of class Ficha03_001
// Execute main function
int main(){
    Ficha03_001 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:54
