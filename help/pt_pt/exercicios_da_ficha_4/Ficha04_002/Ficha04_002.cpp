// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha04_002 {

    public:
        int main() {
            cout << "Primeiro valor \t: ";
            int n1;
            cin >> n1;
            cout << "Segundo valor \t\t: ";
            int n2;
            cin >> n2;
            int igual  = n1 == n2 ;
            cout << "\n" << n1  << "\t==\t" << n2  << "\t=\t" << igual ;
            int diferente  = n1 != n2 ;
            cout << "\n" << n1  << "\t!=\t" << n2  << "\t=\t" << diferente ;
            int compara  = n1 > n2 ;
            cout << "\n" << n1  << "\t>\t" << n2  << "\t=\t" << compara ;
            compara = n1 >= n2 ;
            cout << "\n" << n1  << "\t>=\t" << n2  << "\t=\t" << compara ;
            cout << "\n" << n1  << "\t<\t" << n2  << "\t=\t" <<( ( n1 < n2 )  );
            cout << "\n" << n1  << "\t<=\t" << n2  << "\t=\t" <<( ( n1 <= n2 )  );
            return 0;
        }
};// end of class Ficha04_002
// Execute main function
int main(){
    Ficha04_002 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:30
