// Programador           -

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha11_018 {

    public:
        int main() {
            int alt  = 0 ;
            while(true ){
                cout << "Altura   : ";
                cin >> alt;
                if(alt % 2 == 0 && alt >= 4 ){
                    break;
                }
                cout << "\tValor errado\n";
            }
            cout << "Caractér : ";
            string txt;
            cin >> txt;
            copa(alt / 2 , txt ) ;
            tronco(alt / 2 , txt ) ;
            return 0;
        }

        //::::::::::::::::::::::::::::::::::::::::::::::::::
        //User Defined Functions Code
        //::::::::::::::::::::::::::::::::::::::::::::::::::
        void linhaCopa( int sp, int chars, string txt ){
            int i  = 0 ;
            for( int i = 0; i < sp; i = i + 1 ) {
                cout << " ";
            }
            int i  = 0 ;
            for( int i = 0; i < chars; i = i + 1 ) {
                cout << txt ;
            }
            cout << "\n";
        }
        //::::::::::::::::::::::::::::::::::::::::::::::::::
        void copa( int alt, string txt ){
            int i  = 0 ;
            for( int i = 1; i < alt + 1; i = i + 1 ) {
                int sp  = alt - i ;
                int chrs1  = i * 2 - 1 ;
                linhaCopa(sp , chrs1 , txt ) ;
            }
        }
        //::::::::::::::::::::::::::::::::::::::::::::::::::
        void tronco( int n, string ch ){
            int i  = 0 ;
            for( int i = 0; i < n; i = i + 1 ) {
                int j  = 0 ;
                for( int j = 0; j < n - 1; j = j + 1 ) {
                    cout << " ";
                }
                cout << ch  << "\n";
            }
        }
};// end of class Ficha11_018
// Execute main function
int main(){
    Ficha11_018 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:17
