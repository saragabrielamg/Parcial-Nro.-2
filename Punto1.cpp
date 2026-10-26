#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main (){
    string palabra;
    cout << "Escribe una frase: ";
    getline(cin, palabra);
    int consonante=0, vocal=0, digitos=0, espacios=0, simbolos=0;
    for (int i=0; i < palabra.length(); i++){
    palabra[i]=static_cast<char>(tolower(static_cast<unsigned char>(palabra[i])));

    if (isdigit(palabra[i])){
        digitos++;
    }
    else if (isalpha(palabra[i])) {
        if (palabra[i]=='a' || palabra[i]=='e' || palabra[i]=='i' || palabra[i]=='o' || palabra[i]=='u') {
            vocal++;
        }
        else {
            consonante++;
        }
    }
    else if (isspace(palabra[i])) {
        espacios++;
    }
    else if (ispunct(palabra[i])){ // Tambien se puede utilizar else { simbolos++; }
        simbolos++;
     }
}
    

    cout << "vocales: " <<vocal << endl;
    cout << "consonantes: " << consonante << endl;
    cout << "espacios: " << espacios << endl;
    cout << "digitos: " << digitos << endl;
    cout << "simbolos: " << simbolos << endl;

    return 0;
}
