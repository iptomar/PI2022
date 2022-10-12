// Programador           -

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha11_003 {

    public:
        int main() {
            int i  = 0 ;
            for( int i = 0; i < 10; i = i + 1 ) {
                funcao1() ;
                cout << "\n";
            }
            return 0;
        }

        //::::::::::::::::::::::::::::::::::::::::::::::::::
        //User Defined Functions Code
        //::::::::::::::::::::::::::::::::::::::::::::::::::
        void funcao1(  ){
            cout << "Olá mundo das funções";
        }
};// end of class Ficha11_003
// Execute main function
int main(){
    Ficha11_003 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:09
