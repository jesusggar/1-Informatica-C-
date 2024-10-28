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

void creciente (int n)
{
    for (int i = n; i <= n*2 - 1; i++){
        cout << i%10;
    }
}

void decreciente (int n)
{
    for (int i = n*2 -2; i >= n; i--){
        cout << i%10;
    }
}

void mostrar_figura (int nfilas)
{
    for (int fila = 1; fila <= nfilas; ++fila){
        espacios(nfilas-fila);
        creciente(fila);
        decreciente(fila);
        cout << endl;
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
    int numfilas;
    leer(numfilas);
    guiones(numfilas);
    mostrar_figura(numfilas);
    guiones(numfilas);
}
