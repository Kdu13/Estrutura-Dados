#include <iostream>
using namespace std;

class Triangulo
{

private:
    float ladoA;
    float ladoB;
    float ladoC;

public:
    Triangulo(float a, float b, float c)
    {
        ladoA = a;
        ladoB = b;
        ladoC = c;
    }

    bool eUmTriangulo()
    {
        if ((ladoA + ladoB > ladoC) && (ladoA + ladoC > ladoB) && (ladoB + ladoC > ladoA))
        {
            cout << "E um triangulo.\n";
            return true;
        }
        else
        {
            cout << "Nao e um triangulo.\n";
            return false;
        }
    }

    void tipoDeTriangulo()
    {
        if(eUmTriangulo()){
        if ((ladoA == ladoB) && (ladoB == ladoC))
        {
            cout << "E um triangulo Equilatero.";
        }
        else if ((ladoA == ladoB) || (ladoA == ladoC) || (ladoB == ladoC))
        {
            cout << "E um triangulo Isosceles.";
        }
        else
        {
            cout << "E um triangulo Escaleno.";
        }
    }
}
};


int main()
{
    float a, b, c;

    cout << "Digite o valor do lado A: \n";
    cin >> a;
    cout << "Digite o valor do lado B: \n";
    cin >> b;
    cout << "Digite o valor do lado C: \n";
    cin >> c;

    Triangulo tri(a, b, c);
    tri.eUmTriangulo();
    tri.tipoDeTriangulo();

    return 0;
}