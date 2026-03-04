#include <iostream>
#include <string>
#include <cmath>

//long long es para manejar numeros grandes 64 bits
// IF ( C == "1" || C == "0" )  SI ES 1 O 0 *agregarlo
using namespace std;

int main() {
    string binario;
    int resultado = 0;
    int potencia = 0;

    cout << "Bienvenido/a" << endl;
    cout << "Ingrese un numero binario: ";
    cin >> binario;

    for (int i = binario.length() - 1; i >= 0; i--) {
        if (binario[i] == '1' || binario[i] == '0') {
            cout << "Error: El numero binario solo puede contener 1 y 0" << endl;
            return 0;
           
        }
         resultado += pow(2, potencia);
        potencia++;
    }

    cout << "El resultado decimal es : " << resultado << endl;

    return 0;
}