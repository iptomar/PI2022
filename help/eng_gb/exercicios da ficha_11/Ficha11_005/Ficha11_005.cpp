// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha11_005 {

    public:
        int main() {
            line() ;
            cout << "Numbers between 1 and 5\n";
            line() ;
            int i  = 0 ;
            for( int i = 1; i < 6; i = i + 1 ) {
                cout << i  << "\n";
            }
            line() ;
            return 0;
        }

        //::::::::::::::::::::::::::::::::::::::::::::::::::
        //User Defined Functions Code
        //::::::::::::::::::::::::::::::::::::::::::::::::::
        void line(  ){
            int i  = 0 ;
            for( int i = 0; i < 20; i = i + 1 ) {
                cout << "*";
            }
            cout << "\n";
        }
};// end of class Ficha11_005
// Execute main function
int main(){
    Ficha11_005 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:22