// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha04_018 {

    public:
        int main() {
            cout << "\n4 + 2 * 3 ^ 2 - 1\t= ";
            cout <<( 4 + 2 * (int)( pow( 3 , 2 ) ) - 1  );
            cout << "\n2 + 3 > 2 ^ 2  \t= ";
            cout <<( 2 + 3 > (int)( pow( 2 , 2 ) )  );
            cout << "\n2 < 3 && 4 >= 2 \t= " <<( ( 2 < 3 && 4 >= 2 )  );
            cout << "\n2 > 3 || !(4 == 2) \t= " <<( ( 2 > 3 || ! ( 4 == 2 ) )  );
            int var  = true && ! false || 2 > 3 ;
            cout << "\n_T && ! _F || 2 > 3 \t= " << var ;
            return 0;
        }
};// end of class Ficha04_018
// Execute main function
int main(){
    Ficha04_018 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:33
