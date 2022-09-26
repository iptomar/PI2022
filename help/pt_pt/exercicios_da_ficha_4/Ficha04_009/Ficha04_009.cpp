// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha04_009 {

    public:
        int main() {
            cout << "Verificar se a soma de dois valores reais";
            cout << "\né igual a um terceiro\n";
            cout << "Real 1 \t: ";
            float r1;
            cin >> r1;
            cout << "Real 2 \t: ";
            float r2;
            cin >> r2;
            cout << "Real 3 \t: ";
            float r3;
            cin >> r3;
            cout << r1  << " + " << r2  << " == " << r3  << " => ";
            if(r1 + r2 == r3 ){
                cout << "Verdadeiro";
            }else{
                cout << "Falso";
            }
            return 0;
        }
};// end of class Ficha04_009
// Execute main function
int main(){
    Ficha04_009 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:32
