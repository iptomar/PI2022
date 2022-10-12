// Programador           -

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha11_014 {

    public:
        int main() {
            cout << "Altura  : ";
            int altura;
            cin >> altura;
            cout << "Largura : ";
            int largura;
            cin >> largura;
            caixa(largura , altura ) ;
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
        void interior( int n ){
            cout << "*";
            int i  = 0 ;
            for( int i = 1; i < n - 1; i = i + 1 ) {
                cout << " ";
            }
            cout << "*\n";
        }
        //::::::::::::::::::::::::::::::::::::::::::::::::::
        void caixa( int larg, int alt ){
            linha(larg ) ;
            int i  = 0 ;
            for( int i = 1; i < alt - 1; i = i + 1 ) {
                interior(larg ) ;
            }
            linha(larg ) ;
        }
};// end of class Ficha11_014
// Execute main function
int main(){
    Ficha11_014 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:13
