// 5 - Escreva um programa que solicite ao usuário um valor inteiro e informe se esse número é par ou ímpar.   

#include <iostream> 
#include <math.h> 

using namespace std; 

int main() { 

    int numero; 

    cout << "Digite um numero inteiro: \n"; 
    cin >> numero; 

    if(numero % 2 == 0 ){ 

        cout << "O numero " << numero << " e par \n";
    }
    else{ 

        cout << "O numero " << numero << " e impar \n";
    } 

    return 0;
} 