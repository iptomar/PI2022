// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha04_008 {

    public:
        int main() {
            float r1  = 0.1 ;
            float r2  = 0.2 ;
            if(r1 + r2 == 0.3 ){
                cout << "Soma Correta";
            }else{
                cout << "Soma Errada ";
                cout <<( r1 + r2  );
            }
            return 0;
        }
};// end of class Ficha04_008
// Execute main function
int main(){
    Ficha04_008 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:31
