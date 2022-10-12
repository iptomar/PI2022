// Programador           -

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha11_015 {

    public:
        int main() {
            cout << "Altura   : ";
            int altura;
            cin >> altura;
            cout << "Largura  : ";
            int largura;
            cin >> largura;
            cout << "Limite   : ";
            string limite;
            cin >> limite;
            cout << "Interior : ";
            string interior;
            cin >> interior;
            caixa(largura , altura , limite , interior ) ;
            return 0;
        }

        //::::::::::::::::::::::::::::::::::::::::::::::::::
        //User Defined Functions Code
        //::::::::::::::::::::::::::::::::::::::::::::::::::
        void linha( int n, string c ){
            int i  = 0 ;
            for( int i = 0; i < n; i = i + 1 ) {
                cout << c ;
            }
            cout << "\n";
        }
        //::::::::::::::::::::::::::::::::::::::::::::::::::
        void interior( int n, string cl, string ci ){
            cout << cl ;
            int i  = 0 ;
            for( int i = 1; i < n - 1; i = i + 1 ) {
                cout << ci ;
            }
            cout << cl  << "\n";
        }
        //::::::::::::::::::::::::::::::::::::::::::::::::::
        void caixa( int larg, int alt, string cl, string ci ){
            linha(larg , cl ) ;
            int i  = 0 ;
            for( int i = 1; i < alt - 1; i = i + 1 ) {
                interior(larg , cl , ci ) ;
            }
            linha(larg , cl ) ;
        }
};// end of class Ficha11_015
// Execute main function
int main(){
    Ficha11_015 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:14
