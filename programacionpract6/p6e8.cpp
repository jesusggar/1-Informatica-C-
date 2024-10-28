#include <iostream>
#include <array>
#include <string>

using namespace std;

struct Complejo{
    double real;
    double img;
};

void leer(Complejo& c)
{
    cout << "Introduzca un número complejo (real,img): ";
    cin >> c.real >> c.img;
}

void escribir (const Complejo& c)
{

}

void sumar (Complejo& res, const Complejo& c1, const Complejo& c2)
{

}

void restar (Complejo& res, const Complejo& c1, const Complejo& c2)
{

}

void multiplicar (Complejo& res, const Complejo& c1, const Complejo& c2)
{

}

void dividir (Complejo& res, const Complejo& c1, const Complejo& c2)
{

}

int main()
{
    Complejo c1, c2, res;
    leer(c1);
    leer(c2);
    sumar(res, c1, c2);
    restar(res, c1, c2);
    multiplicar(res, c1, c2);
}
