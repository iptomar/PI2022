// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha07_008 {

    public:
        int main() {
            cout << "x : ";
            float x;
            cin >> x;
            cout << "g(" << x  << ")= ";
            if(x < 1 ){
                x = - pow( x , 2 ) + 1 ;
            }else{
                x--;
            }
            cout << x ;
            return 0;
        }
};// end of class Ficha07_008
// Execute main function
int main(){
    Ficha07_008 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 22:37
