#include <iostream>
#include <array>

using namespace std;

const int MAX_ELMS = 10;
typedef array<int, MAX_ELMS> Numeros;

void leer (Numeros& secuencia)
{
    cout << "Introduzca 10 numeros: ";
    for (int i = 0; i < int(secuencia.size()); ++i){
        cin >> secuencia[i];
    }
}

int numeros_distintos (const Numeros& secuencia)
{
    int cont = 0;
    for (int i = 0; i < int(secuencia.size()); ++i){

    }
}

int buscar_mayor(Numeros& secuencia, int n)
{
    int mayor = secuencia[0];
    for (int i = 0; i < int(secuencia.size()); ++i){
        if (secuencia[i] > mayor){
            mayor = secuencia[i];
        }
    }
    return mayor;
}

void mostrar_veces(Numeros& secuencia, int n)
{
    int veces = 0;
    for (int i = 0; i < int(secuencia.size()); ++i){
        if (secuencia[i] == n){
            ++veces;
        }
    }
    if (veces == 1){
        cout << n << " aparece " << veces << " veces, en posicion ";
    }else{
        cout << n << " aparece " << veces << " veces, en posiciones";
    }
}

void mostrar_posiciones(Numeros& secuencia, int n)
{
    for (int i = 0; i < int(secuencia.size()); ++i){
        if (secuencia[i] == n){
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}

int main()
{
    Numeros secuencia;
    leer(secuencia);
    for (int i = 0; i < int(secuencia.size()); ++i){
        int mayor = buscar_mayor(secuencia,i);
        mostrar_veces(secuencia, mayor);
        mostrar_posiciones(secuencia,mayor);
    }
}
