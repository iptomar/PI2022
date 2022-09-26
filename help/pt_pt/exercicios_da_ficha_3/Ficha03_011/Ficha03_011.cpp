// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha03_011 {

    public:
        int main() {
            cout << "Número inteiro\t: ";
            int n1;
            cin >> n1;
            cout << "Número real \t: ";
            float n2;
            cin >> n2;
            cout << "Números Ordenados";
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
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:30
