// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha07_007 {

    public:
        int main() {
            cout << "Número de termos : ";
            int n;
            cin >> n;
            float produto  = 1 ;
            int i  = 0 ;
            for( int i = 1; i < n + 1; i = i + 1 ) {
                float f  = pow( i , 1.0 / 3 ) ;
                produto *=f;
            }
            cout << "Resultado = " << produto ;
            return 0;
        }
};// end of class Ficha07_007
// Execute main function
int main(){
    Ficha07_007 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:13
