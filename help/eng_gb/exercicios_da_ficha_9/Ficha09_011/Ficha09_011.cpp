// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha09_011 {

    public:
        int main() {
            cout << "Number : ";
            int num;
            cin >> num;
            cout << "Bits = ";
            while(num > 0 ){
                cout <<( num % 2  ) << " ";
                num /=2;
            }
            return 0;
        }
};// end of class Ficha09_011
// Execute main function
int main(){
    Ficha09_011 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:12
