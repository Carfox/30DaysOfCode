//
// Created by Charles on 9/27/2022.
//
#include <iostream>
#include <string>
#include <regex>
using namespace std;
void numberMatch(string);
void letterMatch (string );
void lower_and_upper_Match (string);

int main () {
    string texto ("Hola123abc33");

    numberMatch(texto);
    letterMatch(texto);
    lower_and_upper_Match(texto);



}

void numberMatch (string str ){
    regex num_expr ("\\d");
    int contador = 0;
    regex_iterator<string::iterator> rit ( str.begin(),str.end(), num_expr );
    regex_iterator<string::iterator> rend;
    while (!(rit==rend)) {
        contador++;
        ++rit;
    }
    cout << "existe : "<< contador << " coincidencias de numeros"<<endl;
}

void letterMatch (string str ){
    regex let_expr ("[a-zA-Z]");
    int contador = 0;
    regex_iterator <string::iterator> rit ( str.begin(),str.end(), let_expr );
    regex_iterator <string::iterator> rend;
    while (!(rit==rend)) {
        contador++;
        ++rit;
    }
    cout << "existe : "<< contador << " coincidencias de letras"<<endl;
}

void lower_and_upper_Match (string str ){
    regex letter_expr ("[a-zA-Z]");
    regex upper_expr ("[A-Z]");
    int contadorUpper = 0;
    int contadorLower = 0;
    regex_iterator <string::iterator> rit ( str.begin(),str.end(), letter_expr );
    regex_iterator <string::iterator> ritup ( str.begin(),str.end(), upper_expr );
    regex_iterator <string::iterator> rend;
    while (!(rit==rend)) {
        if(rit){
            contadorUpper++;
        }else{
            contadorLower++;
        }
        ++ritup;
    }
    cout << "existe : "<< contadorUpper << " coincidencias de letras mayusculas"<<endl;
    cout << "existe : "<< contadorLower << " coincidencias de letras minusculas"<<endl;

}
