// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha09_008 {

    public:
        int main() {
            cout << "Fibonaci sequence sum\n ";
            int f0  = 1 ;
            int f1  = 1 ;
            cout << f0  << " " << f1 ;
            int sum  = 2 ;
            while(f0 + f1 < 100 ){
                int fn  = f0 + f1 ;
                sum +=fn;
                cout << " " << fn ;
                f1 = f0 ;
                f0 = fn ;
            }
            cout << "\nSum = " << sum ;
            return 0;
        }
};// end of class Ficha09_008
// Execute main function
int main(){
    Ficha09_008 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:11
