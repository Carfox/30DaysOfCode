#include <iostream>
using namespace std;
int fibonacci(int n);
void fiboSerie(int n);
int fiboSuma(int n);

int main (){
    int n = 7;
    //Impresion del n termino
    cout <<"El termino " <<n <<" es "<< fibonacci(n)<<endl;

    //Impresion de la serie Fibonacci
    cout <<"Serie fibonacci " <<endl;
    fiboSerie(n);
    cout <<endl;

    //Impresion de la Suma de n terminos
    cout << "Suma Fibonacci " << fiboSuma(n) ;
}

//Funcion del algoritmo de recurrencia Fibonacci
int fibonacci(int n) {
    if (n <= 0) { // Caso base
        return 0;
    } else if (n == 1) { // Case base
        return 1;
    } else { // Caso recurrente
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

//Función no retornable de la serie Fibonacci.
void fiboSerie(int n){
    int contador = 0;
    while(contador < n ){
        contador++;
        cout << fibonacci(contador)<<" ";
    }
}

//Funcion de la suma Fibonacci.
int fiboSuma(int n){
    int suma = 0;
    for(int i = 0; i<n;i++){
        suma += fibonacci(i+1);
    }
    return suma;
}
