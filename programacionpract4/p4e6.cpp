#include <iostream>

using namespace std;

void leer (int& x)
{
    cout << "Introduzca el numero de filas (menor de 10): ";
    cin >> x;
    while ((x < 0) || (x >= 10)){
        cout << "Error. Introduzca el numero de filas (menor de 10): ";
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
    for (int i = 1; i <= n; i++){
        cout << i;
    }
}

void decreciente (int n)
{
    for (int i = n -1; i > 0; --i){
        cout << i;
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
    for (int fila = 1; fila <= numfilas; ++fila){
        espacios(numfilas-fila);
        creciente(fila);
        decreciente(fila);
        cout << endl;
    }
    guiones(numfilas);
}
