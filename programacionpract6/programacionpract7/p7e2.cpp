#include <iostream>
#include <array>
#include <string>
#include <iomanip>

using namespace std;

const int NFILS = 5;
const int NCOLS = 7;

typedef array <int, NCOLS> Fila;
typedef array <Fila, NFILS> Matriz;

void leer_matriz (Matriz& m)
{
    cout << "Introduzca " << m.size() << " filas de " << m[0].size() << " numeros" << endl;
    for (int f = 0; f < int(m.size()); ++f) {
        for (int c = 0; c < int(m[f].size()); ++c) {
            cin >> m[f][c];
        }
    }
}

void buscar_mayor2d (const Matriz& m, int& mayor, int& fila, int& columna)
{
    mayor = m[0][0];
    for (int f = 0; f < int(m.size()); ++f) {
        for (int c = 0; c < int(m[f].size()); ++c) {
            if (m[f][c] > mayor){
                mayor = m[f][c];
                fila = f;
                columna = c;
            }
        }
    }
}

void mostrar (Matriz& m, int mayor, int fila, int columna)
{
    cout << endl << "El numero " << mayor << " es el mayor elemento de la matriz" << endl;
    cout << "Se encuentra en [" << fila << "][" << columna << "] (Primera repeticion)" << endl;
    for (int f = 0; f < int(m.size()); ++f) {
        for (int c = 0; c < int(m[f].size()); ++c) {
            cout << setw(3) << m[f][c] << " ";
        }
        cout << endl;
    }
}

int main()
{
    Matriz m;
    int f = 0;
    int c = 0;
    leer_matriz(m);
    int num_mayor;
    buscar_mayor2d(m, num_mayor, f, c);
    mostrar(m, num_mayor, f, c);
}
