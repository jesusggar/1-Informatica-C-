#include <iostream>

using namespace std;

void leer (int& x)
{
    cout << "Introduzca un numero: ";
    cin >> x;
    while (x < 0){
        cout << "Error. Introduzca un numero: ";
        cin >> x;
    }
}

void espacios (int n)
{
    for (int i = 1; i <= n; i++){
        cout << " ";
    }
}

void asterisco (int n)
{
    for (int i = 1; i <= n; i++){
        cout << "* ";
    }
}

void guiones (int n)
{
    for (int i = 0; i < (n*2)-1; i++){
        cout << "-";
    }
    cout << endl;
}

int main()
{
    int numrombo;
    leer(numrombo);
    guiones(numrombo);
    for (int fila = 1; fila <= numrombo; ++fila){
        espacios(numrombo-fila);
        asterisco(fila);
        cout << endl;
    }
    for (int fila_inversa = (numrombo -1); fila_inversa > 0; --fila_inversa){
        espacios(numrombo-fila_inversa);
        asterisco(fila_inversa);
        cout << endl;
    }
    guiones(numrombo);
}
