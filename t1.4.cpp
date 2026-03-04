#include <iostream>
#include <string>

using namespace std;

int main(){
    string cad = "Elizabet";
    int a, b;

    cout << "Cadena original: " << cad << endl;
    cout << "Ingrese indice inicial : ";
    cin >> a;
    cout << "Ingrese indice final : ";
    cin >> b;

    int n = cad.length();
    if (b >= n) {
        b = n - 1;
    }

    while (a < b) {
        char temp = cad[a];
        cad[a] = cad[b];
        cad[b] = temp;

        a++;           // Incrementar el índice inicial
        b--;          // Decrementar el índice final
    }
    cout << "Cadena modificada: " << cad << endl;

   
    return 0;
}