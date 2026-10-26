#include<iostream>
#include<string>
using namespace std;

void numRomano (int a){
    int i=0;
    string romano[]= {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int valores[]= {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    while ( a>0){
        if (a >= valores [i]){
            cout << romano[i];
            a -= valores[i];
        }
        else {
            i++;
        }
    }
}
int main(){
    int numero;
    cout << "Ingrese numero (entre 1 y 3999): ";
    cin >> numero;
    if (numero>3999){
        cout << "El numero se encuentra fuera del rango" << endl;
        return 0;

    }
    cout << "El numero romano es: ";
    numRomano(numero);
    return 0;
    
}