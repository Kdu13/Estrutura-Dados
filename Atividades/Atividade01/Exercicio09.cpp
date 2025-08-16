// 9 - Escreva um programa que solicite ao usuário quatro números e mostre na tela o maior, o menor e a média aritmética dos números digitados.

#include <iostream>
#include <math.h> 
#include <algorithm>

using namespace std;

int main() {

    double n1, n2, n3, n4;
    double maior, menor, media;

    cout << "Digite o primeiro numero: ";
    cin >> n1;

    cout << "Digite o segundo numero: ";
    cin >> n2;

    cout << "Digite o terceiro numero: ";
    cin >> n3;

    cout << "Digite o quarto numero: ";
    cin >> n4;

    maior = max(max(n1, n2), max(n3, n4));

    menor = min(min(n1, n2), min(n3, n4));

    media = (n1 + n2 + n3 + n4) / 4.0;

    cout << "Maior numero: " << maior << "\n";
    cout << "Menor numero: " << menor << "\n";
    cout << "Media aritmetica: " << media << "\n";

    return 0;
}
