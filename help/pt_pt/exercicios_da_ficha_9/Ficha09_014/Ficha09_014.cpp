// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha09_014 {

    public:
        int main() {
            cout << "Decimal : ";
            int num;
            cin >> num;
            string binario  = "" ;
            while(num > 0 ){
                binario =  to_string(num % 2) + binario;
                num /=2;
            }
            cout << "Binario = " << binario ;
            return 0;
        }
};// end of class Ficha09_014
// Execute main function
int main(){
    Ficha09_014 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:26
