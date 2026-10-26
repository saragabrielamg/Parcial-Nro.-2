#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;


bool esNumero(string texto) {
    if (texto.empty() || texto.size() > 2) {
        return false;
    }
    for (int i = 0; i < texto.size(); i++) {
        if (!isdigit(texto[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    string texto;
    int n = 0;

   
    while (n < 1 || n > 15) {
        cout << "Numero de filas (1 a 15): ";
        cin >> texto;
        if (esNumero(texto)) {
            n = stoi(texto);
        } else {
            n = 0;
        }
    }

    
    int ancho = 6;

    for (int fila = 0; fila < n; fila++) {
        
        cout << setw((n - 1 - fila) * ancho / 2) << "";

        int c = 1; 
        for (int k = 0; k <= fila; k++) {
            cout << setw(ancho) << c;
            
            c = c * (fila - k) / (k + 1);
        }
        cout << endl;
    }

    return 0;
}