// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha09_007 {

    public:
        int main() {
            int f0  = 1 ;
            int f1  = 1 ;
            cout << f0  << "\n" << f1  << "\n";
            while(f0 + f1 < 100 ){
                int fn  = f0 + f1 ;
                cout << fn  << "\n";
                f1 = f0 ;
                f0 = fn ;
            }
            return 0;
        }
};// end of class Ficha09_007
// Execute main function
int main(){
    Ficha09_007 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:25
