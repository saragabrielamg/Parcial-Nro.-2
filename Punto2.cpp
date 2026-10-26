#include<iostream>
using namespace std;
int divisoresNum (int c)
{
    int sumDivisores= 0;
 
for (int i=c-1; i>=1; i--){
    if (c % i==0)
sumDivisores= sumDivisores + i;
}
return sumDivisores;
}

int main (){
    int a, b;
    cout<< "Ingrese un numero a (>=1): " ;
    cin >> a;
    cout << "Ingrese un numero b (>=a); ";
    cin >> b;
     if( a > b){
        cout << "Rango no permitido. b debe ser mayor que a" << endl;
     }
     
     int perfectos=0, abudantes=0, deficientes=0;
     for (int j=a; j<=b; j++){
        cout << j << ": ";
     int sumdiv= divisoresNum(j);
     if (j== divisoresNum(j)){
        cout << "Perfecto " << "(Suma de divisores: "  << sumdiv << ")" << endl;
     perfectos++;
     }
     

     else if (j>divisoresNum(j)){
      cout << "Deficiente " << "(Suma de divisores: "  << sumdiv << ")" << endl;
     deficientes++;  
     }
    else if (j<divisoresNum(j)){
        cout << "Abundante " << "(Suma de divisores: "  << sumdiv << ")" << endl;
     abudantes++;
    };

     }
    cout << "Perfectos: " << perfectos << " Deficientes: " << deficientes << " Abundantes: " << abudantes << endl;

return 0;
}
