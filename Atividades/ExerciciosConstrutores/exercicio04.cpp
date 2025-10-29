#include <iostream>
using namespace std;

class Aluno {
public:
    string nome;
    int matricula;
    string telefone;

    Aluno() {
        nome = "";
        matricula = 0;
        telefone = "";
    }

    Aluno(bool lerDados) {
        if (lerDados) {
            cout << "Digite o nome do aluno: ";
            cin >> nome;
            cout << "Digite o numero de matricula: ";
            cin >> matricula;
            cout << "Digite o telefone do aluno: ";
            cin >> telefone;
        }
    }

    static void imprimirDoisAlunos(Aluno &a1, Aluno &a2) {
        cout << "\n--- Dados do Aluno 1 ---\n";
        cout << "Nome: " << a1.nome << "\n";
        cout << "Matricula: " << a1.matricula << "\n";
        cout << "Telefone: " << a1.telefone << "\n";

        cout << "\n--- Dados do Aluno 2 ---\n";
        cout << "Nome: " << a2.nome << "\n";
        cout << "Matricula: " << a2.matricula << "\n";
        cout << "Telefone: " << a2.telefone << "\n";
    }
};

int main() {
    cout << "Aluno 1:\n";
    Aluno aluno1(true);

    cout << "\nAluno 2:\n";
    Aluno aluno2(true);

    Aluno::imprimirDoisAlunos(aluno1, aluno2);

    return 0;
}
