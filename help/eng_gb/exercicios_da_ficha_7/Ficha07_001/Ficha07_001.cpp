// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha07_001 {

    public:
        int main() {
            cout << "Summation\n";
            int sum  = 0 ;
            int i  = 0 ;
            for( int i = 1; i < 6; i = i + 1 ) {
                cout << sum  << " + " << i ;
                sum++;
                cout << " \t = " << sum  << "\n";
            }
            cout << "\nTotal = " << sum ;
            return 0;
        }
};// end of class Ficha07_001
// Execute main function
int main(){
    Ficha07_001 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 22:36
