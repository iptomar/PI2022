// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha07_005 {

    public:
        int main() {
            cout << "Produtório\n";
            int produto  = 1 ;
            int i  = 0 ;
            for( int i = 1; i < 5; i = i + 1 ) {
                cout << produto  << " x " << i ;
                produto *=i;
                cout << " = " << produto  << "\n";
            }
            cout << "\nTotal = " << produto ;
            return 0;
        }
};// end of class Ficha07_005
// Execute main function
int main(){
    Ficha07_005 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:13
