// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha03_022 {

    public:
        int main() {
            cout << "Ângulo \t\t\t: ";
            float ang;
            cin >> ang;
            cout << "Seno hiperbólico \t= " <<( sinh( ang )  ) << "\n";
            cout << "Coseno hiperbólico \t= " <<( cosh( ang )  ) << "\n";
            cout << "Tangente hiperbólica \t= " <<( tanh( ang )  );
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
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:33
