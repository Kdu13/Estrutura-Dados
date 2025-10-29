#include <iostream>
using namespace std;

class Conta{
    public:
    int numero;
    double saldo;
    double limite;
    string nome;

    Conta(int numero, double saldo, double limite, string nome){
        numero = numero;
        saldo = saldo;
        limite = limite;
        nome = nome;
    }

    bool saca(double valor){
        if(saldo < valor){
            return false;
        } else {
            saldo = saldo - valor;
            return true;
        }
    }

    void deposita(double quantidade){
        saldo = saldo + quantidade;
    }

    bool transfere(Conta &destino, double valor){
        bool retirou = saca(valor);
        if(retirou == false){
            return false;
        } else {
            destino.deposita(valor);
            return true;
        }
    }

};




int main(int argc, char** argv) {

    double saldo, limite;
    int numero;
    string nome;

    cout << "Digite o numero da conta: \n";
    cin >> numero;

    cout << "Digite o saldo da conta: \n";
    cin >> saldo;

    cout << "Digite o limite da conta: \n";
    cin >> limite;

    cout << "Digite o nome do titular da conta: \n";
    cin >> nome;


    Conta conta1(numero, saldo, limite, nome);
    Conta conta2(456, 520.57, 320.50, "Bob");

    if(conta1.transfere(conta2, 100)>0){
        cout << "Transferencia realizada com sucesso!\n";
    } else {
        cout << "Saldo insuficiente para transferencia!\n";
    }

    cout << "Saldo da conta 1: " << conta1.saldo << "\n";
    cout << "Saldo da conta 2: " << conta2.saldo << "\n";

    return 0;


}