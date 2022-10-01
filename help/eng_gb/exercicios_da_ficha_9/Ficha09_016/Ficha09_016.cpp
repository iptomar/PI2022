// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha09_016 {

    public:
        int main() {
            cout << "Numero : ";
            int num;
            cin >> num;
            int i  = 1 ;
            cout << "Divisors : ";
            while(i < num ){
                if(num % i == 0 ){
                    cout << i  << " ";
                }
                i++;
            }
            return 0;
        }
};// end of class Ficha09_016
// Execute main function
int main(){
    Ficha09_016 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:13
