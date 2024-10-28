#include <iostream>

using namespace std;

int leer_primero(int& n1, int& n2, int& n3)
{
    cin >> n1 >> n2 >> n3;
}

int leer(int& n1, int& n2, int& n3)
{
    n1 = n2;
    n2 = n3;
    cin >> n3;
}

void reset_cont(int& cont, int& mayor_cont)
{
    if (cont > mayor_cont){
        mayor_cont = cont;
    }
    cont = 1;
}

bool cambio_mont(int n1, int n2, int n3)
{
    bool comprobante = false;
    if ((n2 < n1)&&(n2 < n3)){
        comprobante = true;
    }
    return comprobante;
}

int leermont()
{
    int valor1;
    int valor2;
    int valor3;
    int cont = 0;
    int mayor_cont = 0;
    leer_primero(valor1,valor2,valor3);
    while (valor3 != 0){
        if (cambio_mont(valor1,valor2,valor3)){
        reset_cont(cont,mayor_cont);
        }
        ++cont;
        leer(valor1,valor2,valor3);
    }
    reset_cont(cont,mayor_cont);
    return mayor_cont;
}

int main()
{
    int mayor_mont;
    cout << "Introduzca sucesion de enteros hasta cero: ";
    mayor_mont = leermont();
    cout << "Mayor Montaña: " << mayor_mont << endl;
}
