// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha09_006 {

    public:
        int main() {
            cout << "Limite inferior : ";
            int inf;
            cin >> inf;
            if(inf % 2 == 0 ){
                inf++;
            }
            cout << "Limite superior : ";
            int sup;
            cin >> sup;
            while(inf <= sup ){
                cout << inf  << " ";
                inf +=2;
            }
            return 0;
        }
};// end of class Ficha09_006
// Execute main function
int main(){
    Ficha09_006 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:25
