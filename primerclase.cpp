#include <iostream>
#include <string>
 using namespace std;

 int main()  {
    string nombre, carrera;
     int edad;


        cout <<"ingrese su nombre: ";
        cin >> nombre;

        cout <<"ingrese su carrera: ";
        cin >> carrera;
        
        cout << "ingrese su edad: ";
        cin >> edad;
          

         cout << "hola, " << nombre
                <<". usted estudia " << carrera << " y tiene " << edad << " años." << endl; 

        return 0;
 }