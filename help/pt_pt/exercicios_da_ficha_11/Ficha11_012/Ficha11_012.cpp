// Programador           -

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha11_012 {

    public:
        int main() {
            cout << "Altura : ";
            int altura;
            cin >> altura;
            cout << "Caractér : ";
            string c;
            cin >> c;
            trianguloC(altura , c ) ;
            return 0;
        }

        //::::::::::::::::::::::::::::::::::::::::::::::::::
        //User Defined Functions Code
        //::::::::::::::::::::::::::::::::::::::::::::::::::
        void linhaC( int n, string c ){
            int i  = 0 ;
            for( int i = 0; i < n; i = i + 1 ) {
                cout << c ;
            }
            cout << "\n";
        }
        //::::::::::::::::::::::::::::::::::::::::::::::::::
        void trianguloC( int altura, string c ){
            int i  = 0 ;
            for( int i = 1; i < altura + 1; i = i + 1 ) {
                linhaC(i , c ) ;
            }
        }
};// end of class Ficha11_012
// Execute main function
int main(){
    Ficha11_012 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:12
