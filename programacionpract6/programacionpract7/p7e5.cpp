#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

const int NFILS = 5;
const int NCOLS = 5;

typedef array<int, NCOLS> Fila;
typedef array<Fila, NFILS> TMatriz;

void leer_matriz (TMatriz& m)
{
    cout << "Introduzca " << m.size() << " filas de " << m[0].size() << " numeros: ";
    for (int f = 0; f < m.size(); ++f){
        for (int c = 0; c < m[f].size(); ++c){
            cin >> m[f][c];
        }
    }
}

bool sumaFilas (const TMatriz& m, int& suma_total)
{
    bool comprobante = true;
    int suma = 0;
    for (int c = 0; c < m[0].size(); ++c){
        suma_total += m[0][c];
    }
    for (int f = 1; f < m.size(); ++f){
        for (int c = 0; c < m[0].size(); ++c){
            suma += m[f][c];
        }
        if (suma != suma_total){
            comprobante = false;
        }
        suma = 0;
    }
    return comprobante;
}

bool sumaColumnas (const TMatriz& m, int suma_total)
{
    bool comprobante = true;
    int suma = 0;
    for (int c = 0; c < m[0].size(); ++c){
        for (int f = 0; f < m.size(); ++f){
            suma += m[f][c];
        }
        if (suma != suma_total){
            comprobante = false;
        }
        suma = 0;
    }
    return comprobante;
}

bool sumaDiagonalPrincipal (const TMatriz& m, int suma_total)
{
    bool comprobante = true;
    int suma = 0;
    for (int f = 0; f < m.size(); ++f){
        suma += m[f][f];
    }
    if (suma != suma_total){
        comprobante = false;
    }
    return comprobante;
}

bool sumaDiagonalSecundaria (const TMatriz& m, int suma_total)
{
    bool comprobante = true;
    int f = 0;
    int suma = 0;
    for (int c = m[f].size()-1; c >= 0; --c){
        suma += m[f][c];
        ++f;
    }
    if (suma != suma_total){
        comprobante = false;
    }
    return comprobante;
}

bool esMagico (const TMatriz& mat)
{
    bool comprobante = false;
    int suma_total = 0;
    if (sumaFilas(mat, suma_total)){
        if (sumaColumnas(mat, suma_total)){
            if (sumaDiagonalPrincipal(mat, suma_total)){
                if (sumaDiagonalSecundaria(mat, suma_total)){
                    comprobante = true;
                }
            }
        }
    }
    return comprobante;
}

void mostrar_magico (const TMatriz& m, bool magico)
{
    cout << endl << "El cuadrado: " << endl;
    for (int f = 0; f < m.size(); ++f){
        for (int c = 0; c < m[f].size(); ++c){
            cout << setw(3) << m[f][c] << " ";
        }
        cout << endl;
    }
    cout << endl;
    if (magico){
        cout << "SI es magico" << endl;
    }else{
        cout << "NO es magico" << endl;
    }
}

int main()
{
    TMatriz mat;
    leer_matriz(mat);
    bool magico = esMagico(mat);
    mostrar_magico(mat, magico);
}
