#include<iostream>
#include<string>
#include<cctype>
using namespace std;
void verPass(string c){
    bool largo = false;
    bool mayus = false;
    bool minus = false;
    bool digit = false;
    bool simbol = false;

    if (c.length()>=8){
        largo = true;
    }
    else {
        cout << "-Contener minimo 8 caracteres," << endl;
    }
    
    for (int i=0; i<c.length(); i++){
        if (isalpha(c[i])){
        if (isupper(c[i])){
            mayus = true;
        }
        else {
            minus = true;
        }
    }
    else if (isdigit(c[i])){
        digit = true;
    }
    else if (ispunct(c[i])){
        simbol = true;
    }
    }

if (!mayus){
    cout << "-contener al menos una mayuscula." << endl;
}
if (!minus){
    cout << "-contener al menos una minuscula." << endl;
}
if (!digit){
    cout << "falta al menos un digito." << endl;
}
if (!simbol){
    cout << "-Contener al menos un simbolo." << endl;
}
if (largo && mayus && minus && digit && simbol){
    cout << "contraseña valida." << endl;
}
else {
    cout << "contraseña invalida." << endl;
}
    }
    int main(){
    string password;
    cout << "Ingrese una contraseña: ";
    getline(cin, password);
    verPass(password);
    return 0;
}