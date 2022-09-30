// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha03_022 {

    public:
        int main() {
            cout << "Angle \t\t\t: ";
            float ang;
            cin >> ang;
            cout << "Hyperbolic sine \t= " <<( sinh( ang )  ) << "\n";
            cout << "Hyperbolic Cosine \t= " <<( cosh( ang )  ) << "\n";
            cout << "Hyperbolic tangent \t= " <<( tanh( ang )  );
            return 0;
        }
};// end of class Ficha03_022
// Execute main function
int main(){
    Ficha03_022 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:59
