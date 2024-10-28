#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

const int NFILS = 5;
const int NCOLS = 5;

typedef array<int, NCOLS> Fila;
typedef array<Fila, NFILS> Matriz;

void leer_matriz (Matriz& m)
{
    cout << "Introduzca " << m.size() << " filas de " << m[0].size() << " numeros: ";
    for (int f = 0; f < m.size(); ++f){
        for (int c = 0; c < m[f].size(); ++c){
            cin >> m[f][c];
        }
    }
}

int sumaFila (const Matriz m, int fil)
{
    int res = 0;
    for (int c = 0; c < m[0].size(); ++c){
        res += m[fil][c];
    }
    return res;
}

void mostrar_suma_fila (int suma, int fil)
{
    cout << "La suma de la fila " << fil << " es: " << suma << endl;
}

int sumaColumna (const Matriz& m, int col)
{
    int res = 0;
    for (int f = 0; f < m[0].size(); ++f){
        res += m[f][col];
    }
    return res;
}

void mostrar_suma_columna (int suma, int col)
{
    cout << "La suma de la columna " << col << " es: " << suma << endl;
}

int sumaDiagonalPrincipal (const Matriz& m)
{
    cout << endl;
    int res = 0;
    for (int f = 0; f < m.size(); ++f){
            res += m[f][f];
    }
    return res;
}

int sumaDiagonalSecundaria (const Matriz& m)
{
    int res = 0;
    int f = 0;
    for (int c = m[f].size()-1; c >= 0; --c){
        res += m[f][c];
        ++f;
    }
    return res;
}

int main()
{
    Matriz m;
    int fil = 0;
    int col = 0;
    leer_matriz(m);
    cout << "Introduzca la fila a sumar (entre 0 y " << m.size()-1 << "): ";
    cin >> fil;
    while ((fil < 0)||(fil > m.size()-1)){
        cout << "Error. Introduzca la fila a sumar (entre 0 y " << m.size()-1 << "): ";
        cin >> fil;
    }
    int sumafil = sumaFila(m, fil);
    mostrar_suma_fila(sumafil, fil);
    cout << "Introduzca la columna a sumar (entre 0 y " << m[0].size()-1 << "): ";
    cin >> col;
    while ((col < 0)||(col > m.size()-1)){
        cout << "Error. Introduzca la columna a sumar (entre 0 y " << m.size()-1 << "): ";
        cin >> col;
    }
    int sumacol = sumaColumna(m, col);
    mostrar_suma_columna(sumacol, col);
    int sumadiagonal1 = sumaDiagonalPrincipal(m);
    cout << "La suma de la diagonal principal es: " << sumadiagonal1 << endl;
    int sumadiagonal2 = sumaDiagonalSecundaria(m);
    cout << "La suma de la diagonal secundaria es: " << sumadiagonal2 << endl;
}
