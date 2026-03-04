#include <iostream>

using namespace std;

int main(){
    int n;

    cout <<"Ingrese la cantidad de numeros deseada: ";
    cin >> n;

    int arregloO[n];
    int arregloI[n];
    for(int i = 0; i < n; i++){
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> arregloO[i];
    }

     for(int i = 0; i < n; i++){
        arregloI[i] = arregloO[i] * -1;
    }

    cout <<"No. originales:";
    for (int i = 0; i < n; i++) {
        cout << arregloO[i] << " ";
    }
    cout << endl;

     cout << "No. invertidos:";
    for (int i = 0; i < n; i++) {
            cout << arregloI[i] << " ";
    } 
        cout << endl;
    
        return 0;
    }
