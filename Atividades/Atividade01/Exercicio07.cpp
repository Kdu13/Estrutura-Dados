// 7 - Escreva um programa que solicite ao usuário um ano qualquer e informe se esse ano é bissexto. Um ano é considerado bissexto se ele for divisível por quatro, mas não por 100. Ou então se ele for divisível por 400.

#include <iostream> 
#include <math.h> 

using namespace std; 

int main() { 

    int ano; 
    cout << "Digite um ano: \n";
    cin >> ano; 

    if(ano % 4 == 0  && ano % 100 != 0){ 

        cout << "O ano e bissexto"; 
    } 
    else{ 

        cout << "O ano nao e bissexto"; 
    } 

    return 0; 
} 