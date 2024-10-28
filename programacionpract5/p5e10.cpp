#include <iostream>

using namespace std;

int leer(char& n1, char&n2)
{
    n1 = n2;
    cin >> n2;
}

void reset_cont(int& cont, int& mayor_cont)
{
    if (cont > mayor_cont){
        mayor_cont = cont;
    }
    cont = 0;
}

int leersucesion01()
{
    char valor1;
    char valor2;
    int cont = 0;
    int mayor_cont = 0;
    leer(valor1,valor2);
    while (valor2 != '.'){
        if (valor2 < valor1){
            reset_cont(cont,mayor_cont);
        }
        ++cont;
        leer(valor1,valor2);
    }
    reset_cont(cont,mayor_cont);
    return mayor_cont;
}

int main()
{
    int longitud;
    cout << "Introduzca sucesion de ceros y unos hasta punto: ";
    longitud = leersucesion01();
    cout << "Mayor subsucesion ordenada : " << longitud << endl;
}
