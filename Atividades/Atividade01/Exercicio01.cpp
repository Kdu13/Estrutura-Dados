// 1 - Crie um programa que solicite ao usuário os três coeficientes de uma equação do segundo grau e informe os valores de x’ e x’’.

#include <iostream> 
#include <cmath> 

using namespace std; 

int main() { 

    double a, b, c, d, x1, x2; 

    cout << "Digite 3 valores: \n"; 
    cin >> a >> b >> c;   

    d=(b * b) -4 * a * c;  

    if(d > 0){ 

        x1 = (-b + sqrt(d)) / (2 * a); 
        x2 = (-b - sqrt(d)) / (2 * a); 

        cout << "As saidas sao: " <<x1<<"\n"<<x2<<"\n"; 
    } 
    else if(d == 0) { 

        x1 = -b / (2 * a); 
        cout << "O valor e " << x1 << "\n"; 
    } 
    else{ 

        cout <<"Nao existe raiz \n"; 
    } 
    return 0; 
} 