// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha04_010 {

    public:
        int main() {
            cout << "Número real \t: ";
            float r1;
            cin >> r1;
            cout << "Número real \t: ";
            float r2;
            cin >> r2;
            cout << "Soma real \t: ";
            float r3;
            cin >> r3;
            float soma  = r1 + r2 ;
            float distancia  = abs( soma - r3 ) ;
            float precisao  = 1.0E-5 ;
            cout << r1  << " + " << r2  << " \t= " << r3  << " => ";
            if(distancia < precisao ){
                cout << "Verdadeiro";
            }else{
                cout << "Falso";
            }
            cout << "\n\n" << r1  << " + " << r2  << " \t= " <<( ( r1 + r2 )  );
            cout << "\nDistância \t: " << distancia ;
            cout << "\nPrecisão \t: " << precisao ;
            return 0;
        }
};// end of class Ficha04_010
// Execute main function
int main(){
    Ficha04_010 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:32
