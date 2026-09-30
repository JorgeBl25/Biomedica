

#include <iostream> 
#include <string>

using namespace std;                // crear un programa que diga edad presion y peso y si es apto para donar sangre

                                    // edad tiene que estar entre 18 y 65 si es mayor no es apto
                                    // peso tiene que estar entre 50 y 120 (kg) unidad
                                    // presión debe tener valores optimos entre 90 y 120
    int main () {
        
    int edad; 
    int presion; 
    double peso;
    int puedeDonar=1;
    string nombre;

    cout << "ingrese nombre y apellido: " ;
    getline(cin, nombre);

    cout << "ingrese su edad: " ;
    cin >> edad;

    if (edad >=18 && edad <=65) {
    cout << "su edad es permitida" << endl;

       }   else {
             cout << "no puede donar sangre" << endl;
             puedeDonar=0;
            }

    cout << "ingrese su peso en kg: ";
    cin >> peso;

        if (peso >= 50 && peso <=120 ) {
     cout << "su peso es permitido" << endl;

     }  else {
     cout << "su peso no esta en el rango" << endl;
     puedeDonar=0; 
     }

    cout << "ingrese su presion sistolica: "<< endl;
    cin >> presion;

    if (presion >=90 && presion <=120) {
        cout << "sin problemas de presion parciales" << endl;
    }
    else {
        cout << "presenta problemas, no puede donar" << endl;
        puedeDonar=0;
    }

    

    if (puedeDonar==1) {
        cout << "Hola " << nombre << ", sus valores estan dentro del rango, usted puede donar sangre" << ", siga" << endl;
     } else {
        cout << "Hola " << nombre << ", sus valores no cumplen algunos requisitos" << " no pasas, vas pa fuera" << endl;
     }

     return 0;

    

}
