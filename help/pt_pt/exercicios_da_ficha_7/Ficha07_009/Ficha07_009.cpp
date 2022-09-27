// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha07_009 {

    public:
        int main() {
            cout << "x : ";
            int x;
            cin >> x;
            cout << "f(" << x  << ")= ";
            if(x % 2 == 0 ){
                x++;
            }
            cout << x ;
            return 0;
        }
};// end of class Ficha07_009
// Execute main function
int main(){
    Ficha07_009 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:14
