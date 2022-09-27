// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha02_016 {

    public:
        int main() {
            cout << "1º número :";
            float n1;
            cin >> n1;
            cout << "2º número :";
            float n2;
            cin >> n2;
            cout << n1  << " + " << n2  << " = " <<( ( n1 + n2 )  );
            cout << "\n" << n1  << " - " << n2  << " = " <<( ( n1 - n2 )  );
            cout << "\n" << n1  << " * " << n2  << " = " <<( ( n1 * n2 )  );
            cout << "\n" << n1  << " / " << n2  << " = " <<( ( n1 / n2 )  );
            cout << "\n" << n1  << " ^ " << n2  << " = " <<( ( pow( n1 , n2 ) )  );
            return 0;
        }
};// end of class Ficha02_016
// Execute main function
int main(){
    Ficha02_016 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:44
