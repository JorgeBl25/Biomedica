#include <iostream>

using namespace std;

int main (){

    double nota ;
    cout ("ingrese su nota") ;
    cin >> nota;

if (nota >= 4.5) {
    cout << "paso sobrado" << nota << endl; // se supone que si es mayor o igual a 4.5 el pelao paso relajado
    
  }  else if (nota >= 3.5) {
        cout << "relajate pelao" << nota << endl;

    }  else if (nota >= 3) {
        cout << "preocupese" << nota << endl ;

    } else  {
            cout << "perdio bobo " << nota << endl;
    }
            

        }