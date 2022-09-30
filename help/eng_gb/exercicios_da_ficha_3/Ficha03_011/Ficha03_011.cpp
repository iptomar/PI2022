// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha03_011 {

    public:
        int main() {
            cout << "integer number\t: ";
            int n1;
            cin >> n1;
            cout << "real number \t: ";
            float n2;
            cin >> n2;
            cout << "Ordered Numbers";
            cout << "\n" <<( min( n1 , n2 )  );
            cout << "\n" <<( max( n1 , n2 )  );
            return 0;
        }
};// end of class Ficha03_011
// Execute main function
int main(){
    Ficha03_011 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Tue, 2022 Sep 13 21:57
