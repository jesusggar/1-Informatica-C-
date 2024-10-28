#include <iostream>

using namespace std;

const double valor_tr = 0.7;
const double valor_pract = 0.3;

int main()
{
    double nota_tr, nota_pract;
    cout << "introduzca la nota de teoria: ";
    cin >> nota_tr;
    cout << "introduzca la nota de practicas: ";
    cin >> nota_pract;
    double nota_final = (nota_tr * valor_tr) + (nota_pract * valor_pract);
    cout << "La calificacion es: " << nota_final;
}
