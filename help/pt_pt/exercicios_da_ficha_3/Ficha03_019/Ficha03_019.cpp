// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha03_019 {

    public:
        int main() {
            cout << "Ângulo (rad) \t: ";
            float ang;
            cin >> ang;
            cout << "Seno \t\t= " <<( sin( ang )  ) << "\n";
            cout << "Coseno \t\t= " <<( cos( ang )  ) << "\n";
            cout << "Tangente \t= " <<( tan( ang )  );
            return 0;
        }
};// end of class Ficha03_019
// Execute main function
int main(){
    Ficha03_019 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 14:32
