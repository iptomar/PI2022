// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha02_018 {

    public:
        int main() {
            cout << "Real number : ";
            float n1;
            cin >> n1;
            cout << "Integer  : ";
            int n2;
            cin >> n2;
            float r1  = 0 ;
            float r2  = 0 ;
            float r3  = 0 ;
            float r4  = 0 ;
            r1 = n1 + n2 ;
            r2 = n1 - n2 ;
            r3 = n1 * n2 ;
            r4 = n1 / n2 ;
            cout << n1  << " + " << n2  << " = " << r1 ;
            cout << "\n" << n1  << " - " << n2  << " = " << r2 ;
            cout << "\n" << n1  << " * " << n2  << " = " << r3 ;
            cout << "\n" << n1  << " / " << n2  << " = " << r4 ;
            return 0;
        }
};// end of class Ficha02_018
// Execute main function
int main(){
    Ficha02_018 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 set 21 22:53
