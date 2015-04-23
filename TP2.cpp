    #include <iostream>

    using namespace std;

    int main(){

        int numero;
        int divisor = 2;
        int x;
        int y;

            cout << "Ingresar el numero para determinar si es par: " << endl;
            cin >> numero;
            cout << "El numero ingresado es " << numero << "." << endl;
            x = (int)(numero/divisor);
            y = numero%divisor;
            if (y != 0){
                cout << "El numero " << numero << " es impar." << endl;
            } else {
                cout << "El numero " << numero << " es par." << endl;
            }

        return 0;
    }
