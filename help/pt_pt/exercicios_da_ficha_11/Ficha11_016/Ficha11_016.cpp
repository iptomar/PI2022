// Programador           -

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha11_016 {

    public:
        int main() {
            cout << "Altura   : ";
            int alt;
            cin >> alt;
            cout << "Caractér : ";
            string char;
            cin >> char;
            copa(alt , char ) ;
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
};// end of class Ficha11_016
// Execute main function
int main(){
    Ficha11_016 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:15
