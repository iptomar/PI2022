// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha04_012 {

    public:
        int main() {
            cout << "Real 1 \t: ";
            float r1;
            cin >> r1;
            cout << "Real 2 \t: ";
            float r2;
            cin >> r2;
            cout << "\nDescending order\n";
            if(r1 > r2 ){
                cout << r1  << "\t" << r2 ;
            }else{
                cout << r2  << "\t" << r1 ;
            }
            return 0;
        }
};// end of class Ficha04_012
// Execute main function
int main(){
    Ficha04_012 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:28
