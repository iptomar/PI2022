// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha04_017 {

    public:
        int main() {
            cout << "Nota \t: ";
            int nota;
            cin >> nota;
            if(nota < 0 || nota > 20 ){
                cout << "Nota inválida";
            }else{
                cout << "Nota válida";
            }
            return 0;
        }
};// end of class Ficha04_017
// Execute main function
int main(){
    Ficha04_017 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:33
