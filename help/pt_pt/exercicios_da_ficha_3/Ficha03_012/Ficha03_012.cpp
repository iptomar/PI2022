// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha03_012 {

    public:
        int main() {
            cout << "Nome : ";
            string nome1;
            cin >> nome1;
            cout << "Nome : ";
            string nome2;
            cin >> nome2;
            cout << "Nomes Ordenados";
            cout << "\n" <<( min( nome1 , nome2 )  );
            cout << "\n" <<( max( nome1 , nome2 )  );
            return 0;
        }
};// end of class Ficha03_012
// Execute main function
int main(){
    Ficha03_012 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:31
