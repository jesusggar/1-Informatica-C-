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

bool cambio_valle(int n1, int n2, int n3)
{
    bool comprobante = false;
    if ((n2 > n1)&&(n2 > n3)){
        comprobante = true;
    }
    return comprobante;
}

void leer_mont_valle(int& mayor_cont_mont, int& mayor_cont_valle)
{
    int valor1;
    int valor2;
    int valor3;
    int cont_mont = 0;
    int cont_valle = 0;
    mayor_cont_mont = 0;
    mayor_cont_valle = 0;
    leer(valor1,valor2,valor3);
    while (valor3 != 0){
        if (cambio_mont(valor1,valor2,valor3)){
            reset_cont(cont_mont,mayor_cont_mont);
        }if (cambio_valle(valor1,valor2,valor3)){
            reset_cont(cont_valle,mayor_cont_valle);
        }
        ++cont_mont;
        ++cont_valle;
        leer(valor1,valor2,valor3);
    }
    reset_cont(cont_mont,mayor_cont_mont);
    reset_cont(cont_valle,mayor_cont_valle);
}



int main()
{
    int mayor_mont, mayor_valle;
    cout << "Introduzca sucesion de enteros hasta cero: ";
    leer_mont_valle(mayor_mont,mayor_valle);
    cout << "Mayor Montaña: " << mayor_mont << endl;
    cout << "Mayor Valle: " << mayor_valle << endl;
}
