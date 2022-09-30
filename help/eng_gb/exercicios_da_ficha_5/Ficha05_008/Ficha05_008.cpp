// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha05_008 {

    public:
        int main() {
            cout << "Minimum : ";
            int imin;
            cin >> imin;
            cout << "Maximum : ";
            int imax;
            cin >> imax;
            int i  = 0 ;
            for( int i = imin; i < imax + 1; i = i + 1 ) {
                if(i % 2 == 0 ){
                    cout << i  << " ";
                }
            }
            return 0;
        }
};// end of class Ficha05_008
// Execute main function
int main(){
    Ficha05_008 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Sep 24 22:05
