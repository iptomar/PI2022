// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha10_001 {

    public:
        int main() {
            int i  = 0 ;
            while(true ){
                cout << "Positive number : ";
                cin >> i;
                if(i > 0 ){
                    break;
                }
                cout << "Error in reading\n\n";
            }
            cout << "Entered value = " << i ;
            return 0;
        }
};// end of class Ficha10_001
// Execute main function
int main(){
    Ficha10_001 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 19:32
