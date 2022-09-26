// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
#define length( a ) ( sizeof( a ) / sizeof( a[0] ))
using namespace std;

// Class definition
class Ficha03_017 {

    public:
        int main() {
            cout << "Nome : ";
            string nome;
            cin >> nome;
            cout << "Numero de caracteres = " <<( length( nome )  );
            return 0;
        }
};// end of class Ficha03_017
// Execute main function
int main(){
    Ficha03_017 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:31
