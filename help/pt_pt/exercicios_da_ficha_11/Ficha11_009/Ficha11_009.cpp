// Programador           -

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha11_009 {

    public:
        int main() {
            cout << "Altura : ";
            int altura;
            cin >> altura;
            triangulo(altura ) ;
            return 0;
        }

        //::::::::::::::::::::::::::::::::::::::::::::::::::
        //User Defined Functions Code
        //::::::::::::::::::::::::::::::::::::::::::::::::::
        void linha( int n ){
            int i  = 0 ;
            for( int i = 0; i < n; i = i + 1 ) {
                cout << "*";
            }
            cout << "\n";
        }
        //::::::::::::::::::::::::::::::::::::::::::::::::::
        void triangulo( int altura ){
            int i  = 0 ;
            for( int i = 1; i < altura + 1; i = i + 1 ) {
                linha(i ) ;
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
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:10
