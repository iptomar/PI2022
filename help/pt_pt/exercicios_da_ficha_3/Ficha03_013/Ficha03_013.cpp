// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

// Class definition
class Ficha03_013 {

    public:
        int main() {
            srand(time(NULL)); // initialize random numbers 
            cout <<( (1.0/RAND_MAX) * rand( )  ) << "\n";
            cout <<( (1.0/RAND_MAX) * rand( )  ) << "\n";
            cout <<( (1.0/RAND_MAX) * rand( )  );
            return 0;
        }
};// end of class Ficha03_013
// Execute main function
int main(){
    Ficha03_013 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:31
