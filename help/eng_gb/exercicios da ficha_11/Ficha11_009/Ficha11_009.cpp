// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha11_009 {

    public:
        int main() {
            cout << "Height : ";
            int height;
            cin >> height;
            triangle(height ) ;
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
        //::::::::::::::::::::::::::::::::::::::::::::::::::
        void triangle( int height ){
            int i  = 0 ;
            for( int i = 1; i < height + 1; i = i + 1 ) {
                line(i ) ;
            }
        }
};// end of class Ficha11_009
// Execute main function
int main(){
    Ficha11_009 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:23
