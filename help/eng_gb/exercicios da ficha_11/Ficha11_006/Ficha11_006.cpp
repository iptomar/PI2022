// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha11_006 {

    public:
        int main() {
            line3() ;
            line5() ;
            line7() ;
            line5() ;
            line3() ;
            return 0;
        }

        //::::::::::::::::::::::::::::::::::::::::::::::::::
        //User Defined Functions Code
        //::::::::::::::::::::::::::::::::::::::::::::::::::
        void line3(  ){
            int i  = 0 ;
            for( int i = 0; i < 3; i = i + 1 ) {
                cout << "*";
            }
            cout << "\n";
        }
        //::::::::::::::::::::::::::::::::::::::::::::::::::
        void line5(  ){
            int i  = 0 ;
            for( int i = 0; i < 5; i = i + 1 ) {
                cout << "*";
            }
            cout << "\n";
        }
        //::::::::::::::::::::::::::::::::::::::::::::::::::
        void line7(  ){
            int i  = 0 ;
            for( int i = 0; i < 7; i = i + 1 ) {
                cout << "*";
            }
            cout << "\n";
        }
};// end of class Ficha11_006
// Execute main function
int main(){
    Ficha11_006 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:22
