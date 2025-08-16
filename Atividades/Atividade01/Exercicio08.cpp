// 8 - Crie um programa que solicite ao usuário os três ângulos de um triângulo e informe se este é um triângulo equilátero, isósceles ou escaleno.

#include <iostream> 
#include <math.h> 

using namespace std; 

int main() {

    int ladoA, ladoB, ladoC;

    cout << "Digite os tres lados de um triangulo, para saber se e um triangulo equilatero, isosceles ou escaleno. \n";

    cout << "Digite o lado a: \n";
    cin >> ladoA;

    cout << "Digite o lado b: \n";
    cin >> ladoB;

    cout << "Digite o lado c: \n";
    cin >> ladoC;

    if (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA){

        if(ladoA == ladoB && ladoB == ladoC){

        cout << "Triangulo Equilatero. \n";
        }
        else if(ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){

        cout << "Triangulo Isosceles. \n";
        }
        else{

        cout << "Triangulo Escaleno. \n";
        }
    }
    else{

        cout << "Os valores nao formam um triangulo. \n";
    }
    return 0;
}