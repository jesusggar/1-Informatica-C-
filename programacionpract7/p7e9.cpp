#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

const int TAM = 5;

typedef array<char, TAM> Signos;
typedef array<Signos, TAM> Generacion;

void imprimirGeneracion(const Generacion& generacion) {
    for (int i = 0; i < TAM; ++i) {
        for (int j = 0; j < TAM; ++j) {
            cout << generacion[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

int contarVecinos(const Generacion& generacion, int i, int j) {
    int vecinos = 0;
    int inicioX = i;
    if (i > 0) {
        inicioX = i - 1;
    }
    int finX = i + 1;
    if (i < TAM - 1) {
        finX = i + 2;
    }
    int inicioY = j;
    if (j > 0) {
        inicioY = j - 1;
    }
    int finY = j + 1;
    if (j < TAM - 1) {
        finY = j + 2;
    }
    for (int x = inicioX; x < finX; ++x) {
        for (int y = inicioY; y < finY; ++y) {
            if (x != i || y != j) {
                if (generacion[x][y] == 'x') {
                    vecinos++;
                }
            }
        }
    }
    return vecinos;
}

void siguienteGeneracion(const Generacion& generacionActual, Generacion& nuevaGeneracion) {
    for (int i = 0; i < TAM; ++i) {
        for (int j = 0; j < TAM; ++j) {
            int vecinos = contarVecinos(generacionActual, i, j);

            if (generacionActual[i][j] == 'o' && vecinos == 3) {
                nuevaGeneracion[i][j] = 'x';
            } else if (generacionActual[i][j] == 'x' && (vecinos == 2 || vecinos == 3)) {
                nuevaGeneracion[i][j] = 'x';
            } else {
                nuevaGeneracion[i][j] = 'o';
            }
        }
    }
}

int main() {
    int numGeneraciones;
    cout << "Introduzca numero de generaciones: ";
    cin >> numGeneraciones;
    if (numGeneraciones <= 0) {
        cout << "Error" << endl;
    }else{
        Generacion generacionActual;
        cout << "Introduzca generacion inicial: " << endl;
        for (int i = 0; i < TAM; ++i) {
            for (int j = 0; j < TAM; ++j) {
                cin >> generacionActual[i][j];
            }
        }
        cout << endl << "Generacion 1 (inicial):" << endl;
        imprimirGeneracion(generacionActual);

        Generacion nuevaGeneracion;
        for (int generacion = 2; generacion <= numGeneraciones; ++generacion) {
            siguienteGeneracion(generacionActual, nuevaGeneracion);
            generacionActual = nuevaGeneracion;
            cout << "Generación " << generacion << ":" << endl;
            imprimirGeneracion(generacionActual);
        }
    }
}
