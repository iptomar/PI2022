// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha10_002 {

    public:
        int main() {
            int i  = 0 ;
            for( int i = 1; i < 21; i = i + 1 ) {
                if(i % 3 == 0 ){
                    continue;
                }
                cout << i  << " ";
            }
            return 0;
        }
};// end of class Ficha10_002
// Execute main function
int main(){
    Ficha10_002 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 19:26
