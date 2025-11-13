#include <iostream>
using namespace std;

class Estacionamento{

    private:
        int dia;
        int horaEntrada;
        int horaSaida;

    public:

        Estacionamento(int dia, int horaEntrada, int horaSaida){
            this->dia = dia;
            this->horaEntrada = horaEntrada;
            this->horaSaida = horaSaida;
        }

        void solicitarDados(){
            cout<<"Digite o dia do estacionamento: \n";
            cin>>dia;
            cout<<"Digite a hora de entrada: \n";
            cin>>horaEntrada;
            cout<<"Digite a hora de saida: \n";
            cin>>horaSaida;
        }

        void calcularValor(){
            int horasEstacionado = horaSaida - horaEntrada;
            if(horasEstacionado < 0){
                cout<<"Hora de saida invalida!\n";
            }else{
                int valorTotal = horasEstacionado * 5;
                cout<<"O valor a ser pago e: R$ "<<valorTotal<<"\n";
            }
        }
};


int main(){
    Estacionamento est(0, 0, 0);
    est.solicitarDados();
    est.calcularValor();

    return 0;
}
