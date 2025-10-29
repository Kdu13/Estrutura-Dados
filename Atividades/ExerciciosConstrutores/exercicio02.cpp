#include <iostream>
using namespace std;

class Comparavel{

    public:
    int valor;


    Comparavel(int valor){
        this->valor = valor;
    }

    bool eMaiorOuIgual(Comparavel &outro){
        if(this->valor >= outro.valor){
            return true;
        } else {
            return false;
        }
    }


    bool eMenorOuIgual(Comparavel &outro){
        if(this->valor <= outro.valor){
            return true;
        } else {
            return false;
        }
    }


    bool eDiferente(Comparavel &outro){
        if(this->valor != outro.valor){
            return true;
        } else {
            return false;
        }
    }
};


int main(int argc, char** argv) {

    int valor1, valor2;

    cout << "Digite o primeiro valor: \n";
    cin >> valor1;

    cout << "Digite o segundo valor: \n";
    cin >> valor2;

    Comparavel comp1(valor1);
    Comparavel comp2(valor2);

    if(comp1.eMaiorOuIgual(comp2)){
        cout << valor1 << " e maior ou igual a " << valor2 << "\n";
    } else {
        cout << valor1 << " nao e maior ou igual a " << valor2 << "\n";
    }

    if(comp1.eMenorOuIgual(comp2)){
        cout << valor1 << " e menor ou igual a " << valor2 << "\n";
    } else {
        cout << valor1 << " nao e menor ou igual a " << valor2 << "\n";
    }

    if(comp1.eDiferente(comp2)){
        cout << valor1 << " e diferente de " << valor2 << "\n";
    } else {
        cout << valor1 << " nao e diferente de " << valor2 << "\n";
    }

    return 0;


};