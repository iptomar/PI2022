// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha05_009 {

    public:
        int main() {
            cout << "Minimo : ";
            int imin;
            cin >> imin;
            cout << "Maximo : ";
            int imax;
            cin >> imax;
            if(imin % 2 != 0 ){
                imin++;
            }
            int i  = 0 ;
            for( int i = imin; i < imax + 1; i = i + 2 ) {
                cout << i  << " ";
            }
            return 0;
        }
};// end of class Ficha05_009
// Execute main function
int main(){
    Ficha05_009 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:03
