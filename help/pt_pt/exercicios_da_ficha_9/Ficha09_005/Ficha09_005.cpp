// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha09_005 {

    public:
        int main() {
            cout << "Limite inferior : ";
            int inf;
            cin >> inf;
            cout << "Limite superior : ";
            int sup;
            cin >> sup;
            while(inf <= sup ){
                if(inf % 2 != 0 ){
                    cout << inf  << " ";
                }
                inf++;
            }
            return 0;
        }
};// end of class Ficha09_005
// Execute main function
int main(){
    Ficha09_005 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:24
