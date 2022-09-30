// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha04_006 {

    public:
        int main() {
            cout << "Number \t: ";
            int num;
            cin >> num;
            if(num >= 0 ){
                if(num > 0 ){
                    cout << "Positive";
                }else{
                    cout << "Null";
                }
            }else{
                cout << "Negative";
            }
            return 0;
        }
};// end of class Ficha04_006
// Execute main function
int main(){
    Ficha04_006 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:28
