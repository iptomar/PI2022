// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
#define length( a ) ( sizeof( a ) / sizeof( a[0] ))
using namespace std;

// Class definition
class Ficha03_017 {

    public:
        int main() {
            cout << "Name : ";
            string name;
            cin >> name;
            cout << "Number of characters = " <<( length( name )  );
            return 0;
        }
};// end of class Ficha03_017
// Execute main function
int main(){
    Ficha03_017 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:58
