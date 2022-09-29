// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha08_005 {

    public:
        int main() {
            float altura  = 0.0 ;
            do{
                cout << "Altura : ";
                cin >> altura;
            }while(altura < 0.2 || altura > 3.0 );
            cout << "Altura = " << altura ;
            return 0;
        }
};// end of class Ficha08_005
// Execute main function
int main(){
    Ficha08_005 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:17
