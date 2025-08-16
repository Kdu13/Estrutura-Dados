// 4 - Crie um programa que solicite ao usuário os lados de um trapézio e informe a sua área.  

#include <iostream> 
#include <math.h> 

using namespace std; 

int main() {

    double altura,baseMaior,baseMenor,area; 

    cout << "Digite a base maior: \n"; 
    cin >> baseMaior; 

    cout << "Digite a base menor: \n"; 
    cin >> baseMenor; 

    cout << "Digite a altura: \n"; 
    cin >> altura; 

    area = (baseMaior + baseMenor) * altura / 2; 

    cout << "A area do trapezio e: " << area << "\n"; 

    return 0;
} 