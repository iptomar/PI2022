// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Class definition
class Ficha04_016 {

    public:
        int main() {
            cout << "Grade \t: ";
            int grade;
            cin >> grade;
            if(grade >= 0 && grade <= 20 ){
                cout << "Valid Grade";
            }else{
                cout << "Invalid Grade";
            }
            return 0;
        }
};// end of class Ficha04_016
// Execute main function
int main(){
    Ficha04_016 application; // create object
    application.main(); // execute object
    return 0;
}

//C++  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:29
