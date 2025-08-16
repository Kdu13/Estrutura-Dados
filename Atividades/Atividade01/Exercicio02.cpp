// 2 - Crie um programa que solicite ao usuário os lados de um retângulo e informe a sua área. 

#include <iostream> 
#include <math.h> 

using namespace std; 

int main() { 

    double altura,base,area; 

    cout << "Digite a base: \n"; 
    cin >> base;   

    cout << "Digite a altura: \n"; 
    cin >> altura; 

    area = base * altura; 
    cout << "A area do retangulo e: " << area << "\n"; 

    return 0; 
} 