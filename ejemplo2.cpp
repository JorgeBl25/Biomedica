#include <iostream>

using namespace std;

int main () {

    int nota;
    
    cout << "ingrese su nota" << endl;
    cin >> nota; 
    
    


if (nota >= 90) {
    cout << "aprobado" << endl;

} else if (nota >=70){
    cout << "rezando" << endl;

} else if (nota >= 60){
    cout << "merece recuperación" << endl;

}   else 
    cout << "pierde" << endl;

    return 0;
} 
