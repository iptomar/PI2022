// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha11_007 {

    public:
        int main() {
            line(3 ) ;
            line(5 ) ;
            line(7 ) ;
            line(5 ) ;
            line(3 ) ;
            return 0;
        }

        //::::::::::::::::::::::::::::::::::::::::::::::::::
        //User Defined Functions Code
        //::::::::::::::::::::::::::::::::::::::::::::::::::
        void line( int n ){
            int i  = 0 ;
            for( int i = 0; i < n; i = i + 1 ) {
                cout << "*";
            }
            cout << "\n";
        }
};// end of class Ficha11_007
// Execute main function
int main(){
    Ficha11_007 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:22
