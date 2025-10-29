#include <iostream>
#include <iomanip> // para setprecision
using namespace std;

class EntradaDeCinema {
public:
    int diaDoFilme;
    float horario;
    int sala;
    float valor;

    EntradaDeCinema(int diaDoFilme, float horario, int sala, float valor) {
        this->diaDoFilme = diaDoFilme;
        this->horario = horario;
        this->sala = sala;
        this->valor = valor;
    }

    double calculaDesconto(int idade) {
        if (idade < 12) {
            return valor * 0.5;
        } else {
            return valor;
        }
    }

    double calculaDesconto(int idade, bool estudante) {
        double desconto = valor;
        if (idade >= 12 && idade <= 15 && estudante) {
            desconto = valor * 0.6;
        } else if (idade > 15 && idade <= 20 && estudante) {
            desconto = valor * 0.7;
        } else if (idade > 20 && estudante) {
            desconto = valor * 0.8;
        }
        return desconto;
    }

    double calculaDescontoHorario(double valorComDesconto) {
        if (horario < 16.0) {
            return valorComDesconto * 0.9;
        } else {
            return valorComDesconto;
        }
    }

    void toString() {
        cout << fixed << setprecision(2);
        cout << "Dia do filme: " << diaDoFilme << "\n";
        cout << "Horario: " << horario << "h\n";
        cout << "Sala: " << sala << "\n";
        cout << "Valor: R$ " << valor << "\n";
    }
};

int main() {
    EntradaDeCinema ingresso(25, 15.30, 7, 50.0);

    int idade;
    bool estudante;

    cout << "Digite a idade: ";
    cin >> idade;
    cout << "Eh estudante? 1 = sim, 0 = nao: ";
    cin >> estudante;

    double valorComDesconto = ingresso.calculaDesconto(idade, estudante);
    valorComDesconto = ingresso.calculaDescontoHorario(valorComDesconto);

    ingresso.toString();
    cout << "Valor final com desconto: R$ " << fixed << setprecision(2) << valorComDesconto << "\n";

    return 0;
}
