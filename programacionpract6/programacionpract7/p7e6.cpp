#include <iostream>
#include <array>
#include <iomanip>
#include <string>

using namespace std;

const int MAX_ALUMNOS = 20;
const int N_EVALUACIONES = 3;

typedef array<double, N_EVALUACIONES> Fila;
typedef array<Fila, MAX_ALUMNOS> TMatriz;
typedef array<string, MAX_ALUMNOS> Nombres_Alumnos;

struct Alumnos{
    int nalum;
    TMatriz alum;
};

struct Nombres{
    int nalum;
    Nombres_Alumnos alum;
};

void leer_cant_alumnos (Alumnos& alumnos, Nombres& nombres)
{
    cout << "Introduce el numero de alumnos de la clase (maximo 20): ";
    cin >> alumnos.nalum;
    nombres.nalum = alumnos.nalum;
}

void leer_matriz (Alumnos& alumnos, Nombres& nombres)
{
    for (int f = 0; f < alumnos.nalum; ++f){
        cout << "Introduce el nombre del alumno y sus " << alumnos.alum[0].size() << " notas: ";
        cin >> nombres.alum[f];
        for (int c = 0; c < alumnos.alum[f].size(); ++c){
            cin >> alumnos.alum[f][c];
        }
    }
}

double media (Alumnos& alumnos, int eval)
{
    int suma_total = 0;
    for (int f = 0; f < alumnos.nalum; ++f){
        suma_total += alumnos.alum[f][eval];
    }
    int media = suma_total / alumnos.nalum;
    return media;
}

void comprobar_notas (Alumnos& alumnos, Nombres& nombres)
{
    cout << "Alumno" << setw(10) << "Nota-1" << setw(12) << "Nota-2" << setw(12) << "Nota-3" << endl;
    for (int i = 1; i <= 40; ++i){
        cout << "-";
    }
    cout << endl;
    for (int f = 0; f < alumnos.nalum; ++f){
        cout << setw(6) <<nombres.alum[f];
        for (int c = 0; c < alumnos.alum[f].size(); ++c){
            if (alumnos.alum[f][c] >= media(alumnos,c)){
                cout << setw(12) << "Aprobado";
            }else{
                cout << setw(12) << "Suspenso";
            }
        }
        cout << endl;
    }
}

int main()
{
    Alumnos alumnos;
    Nombres nombres;
    leer_cant_alumnos(alumnos, nombres);
    if (nombres.nalum <= MAX_ALUMNOS){
        leer_matriz(alumnos, nombres);
        comprobar_notas(alumnos, nombres);
    }else{
        cout << "Error, demasiados alumnos.";
    }
}
