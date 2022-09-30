// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha04_014 {

    public:
        int main() {
            cout << "Truth table of OR\n";
            int var  = true || true ;
            cout << "\n" << true  << "\t||\t" << true  << "\t= " << var ;
            var = true || false ;
            cout << "\n" << true  << "\t||\t" << false  << "\t\t= " << var ;
            var = false || true ;
            cout << "\n" << false  << "\t\t||\t" << true  << "\t= " << var ;
            cout << "\n" << false  << "\t\t||\t" << false  << "\t\t= " <<( ( false || false )  );
            return 0;
        }
};// end of class Ficha04_014
// Execute main function
int main(){
    Ficha04_014 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:28
