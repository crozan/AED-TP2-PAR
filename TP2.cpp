// El programa pide un número y corrobora si el mismo es par.
// Autor: Cynthia Rozán
// Última modificación: 22/04/2015


    #include <iostream>

    using namespace std;

    int main(){

        int numero;
        int divisor = 2;
        int x;

            cout << "Ingresar el numero para determinar si es par: " << endl;
            cin >> numero;
            cout << "El numero ingresado es " << numero << "." << endl;
            x = numero%divisor;
            if (x != 0){
                cout << "El numero " << numero << " es impar." << endl;
            } else {
                cout << "El numero " << numero << " es par." << endl;
            }

        return 0;
    }
