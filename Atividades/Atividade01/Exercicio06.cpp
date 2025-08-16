// 6 - Escreva um programa que solicite ao usuário a idade de uma pessoa e informe se essa pessoa é criança (0 a 11 anos), adolescente (15 a 17 anos), adulta (18 a 49 anos) ou idosa (a partir de 50 anos).  

#include <iostream> 
#include <math.h> 

using namespace std; 

int main() { 

    int idade; 

    cout << "Digite sua idade: \n"; 
    cin >> idade;  

    if(idade < 0){ 

        cout << "Idade Invalida \n"; 
    } 
    else if(idade >= 0 && idade <= 11){ 

        cout << "Voce e crianca \n"; 
    } 
    else if(idade >= 12 && idade < 14){ 

        cout << "Voce e pre-adolescente \n"; 
    } 
    else if(idade >= 15 && idade < 17){ 

        cout << "Voce e adolescente"; 
    } 
    else if(idade >= 18 && idade < 49){ 

        cout << "Voce e adulto \n"; 
    } 
    else{ 

        cout << "Voce e idoso \n"; 
    }

    return 0; 
} 