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

bool comprobar_simetria (const Matriz& m)
{
    bool comprobante = true;
    for (int f = 0; ((f < m.size()-1)&&(comprobante == true)); ++f){
        for (int c = 1; ((c < m[f].size())&&(comprobante == true)); ++c){
            if (m[f][c] != m[c][f]){
                comprobante = false;
            }
        }
    }
    return comprobante;
}

void mostrar_matriz (const Matriz& m, bool simetrica)
{
    cout << "La matriz" << endl;
    for (int f = 0; f < m.size(); ++f){
        for (int c = 0; c < m[f].size(); ++c){
            cout << setw(3) << m[f][c] << " ";
        }
        cout << endl;
    }
    if (simetrica){
        cout << "SI es simetrica" << endl;
    }else{
        cout << "NO es simetrica" << endl;
    }
}

int main()
{
    Matriz m;
    leer_matriz(m);
    bool simetrica = comprobar_simetria(m);
    mostrar_matriz(m, simetrica);
}
