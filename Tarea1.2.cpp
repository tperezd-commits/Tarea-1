#include <iostream>

using namespace std;

int main(){
    int n;

    cout <<"Bienvenido/a" << endl;
    cout <<"Ingrese un numero entero: ";
    cin >> n;

int arreglo[n];

    for (int i = 0; i < n; i++){
        arreglo[i] = n - i;
    }
    
    cout << "Arreglo en forma descendente: [";
    for (int i = 0; i < n; i++){
        cout << arreglo[i] << (i == n - 1 ? "" : ",");
    }
    cout << "]" << endl;
    return 0;
}
