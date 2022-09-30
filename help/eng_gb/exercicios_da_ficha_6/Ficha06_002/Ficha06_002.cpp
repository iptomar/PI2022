// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha06_002 {

    public:
        int main() {
            cout << "Height : ";
            int height;
            cin >> height;
            int i  = 0 ;
            for( int i = 0; i < height; i = i + 1 ) {
                int j  = 0 ;
                for( int j = 0; j < height; j = j + 1 ) {
                    cout << "*";
                }
                cout << "\n";
            }
            return 0;
        }
};// end of class Ficha06_002
// Execute main function
int main(){
    Ficha06_002 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 21:55
