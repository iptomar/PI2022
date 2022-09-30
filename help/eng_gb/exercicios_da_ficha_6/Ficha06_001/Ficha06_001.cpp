// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha06_001 {

    public:
        int main() {
            int n  = 0 ;
            for( int n = 1; n < 11; n = n + 1 ) {
                cout << "\nTabuada do " << n  << "\n";
                int i  = 0 ;
                for( int i = 1; i < 11; i = i + 1 ) {
                    cout << n  << " x " << i  << " = " <<( i * n  ) << "\n";
                }
            }
            return 0;
        }
};// end of class Ficha06_001
// Execute main function
int main(){
    Ficha06_001 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 21:54
