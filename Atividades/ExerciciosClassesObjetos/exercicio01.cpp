#include <iostream>
using namespace std;

class Matematica{

    private:
        int a;
        int b;

    public:

        Matematica(int a, int b){
            this->a = a;
            this->b = b;
        }

        int soma(){
            return a + b;
        }

        int subtracao(){
            return a - b;
        }

        int multiplicacao(){
            return a * b;
        }

        float divisao(){
            if(b == 0){
                cout<<"Não da pra dividir por zero!\n";
            }else{
                return a / b;
            }
        }
};


int main(){
    int a, b;

    cout<<"Digite o primeiro valor: \n";
    cin>>a;
    cout<<"Digite o segundo valor: \n";
    cin>>b;

    Matematica mat(a, b);
    cout<<"Soma: "<<mat.soma()<<"\n";
    cout<<"Subtracao: "<<mat.subtracao()<<"\n";
    cout<<"Multiplicacao: "<<mat.multiplicacao()<<"\n";
    cout<<"Divisao: "<<mat.divisao()<<"\n";

    return 0;
}