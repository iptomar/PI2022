// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha04_009 {

    public:
        int main() {
            cout << "Check if the sum of two real values";
            cout << "\nis equal to a third\n";
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
                cout << "True";
            }else{
                cout << "False";
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
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:28
