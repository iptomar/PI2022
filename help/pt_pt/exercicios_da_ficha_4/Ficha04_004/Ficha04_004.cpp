// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha04_004 {

    public:
        int main() {
            cout << "Número \t: ";
            int num;
            cin >> num;
            if(num > 0 ){
                cout << "Positivo";
            }else{
                if(num == 0 ){
                    cout << "Nulo";
                }else{
                    cout << "Negativo";
                }
            }
            return 0;
        }
};// end of class Ficha04_004
// Execute main function
int main(){
    Ficha04_004 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:31
