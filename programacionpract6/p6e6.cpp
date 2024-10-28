#include <iostream>
#include <array>
#include <cmath>

using namespace std;

const int MAX = 100;
typedef array<int, MAX> Elementos;

struct Lista{
    int nelms = 0;
    Elementos elm;
};

int leer (Lista& lista)
{
    cout << "Introduzca el valor de K (<= 100): ";
    cin >> lista.nelms;
    int K = lista.nelms;
    return K;
}

void crear (Lista& lista)
{
    for (int i = 0; i < lista.nelms; ++i){
        lista.elm[i] = i;
    }
}

void eliminar_ord(Lista& lista, int pos)
{
    for (int i = pos+1; i < lista.nelms; ++i) {
        lista.elm[i-1] = lista.elm[i];
    }
    --lista.nelms;
}

void eliminar_ord_multiplos(Lista& lista, int num, int pos)
{
    for (int i = pos+1; i < lista.nelms; ++i){
        if (lista.elm[i] % num == 0){
            eliminar_ord(lista, i);
        }
    }
}

void tachar_cero_uno (Lista& lista)
{
    for (int i = 0; i < 2; ++i){
        eliminar_ord(lista, 0);
    }
}

void tachar_multiplos (Lista& lista, int K)
{
    for (int i = 0; i < lista.nelms; ++i){
        if (lista.elm[i] < sqrt(K)){
            eliminar_ord_multiplos(lista, lista.elm[i], i);
        }
    }
}

void mostrar_lista (const Lista& lista)
{
    for (int i = 0; i < lista.nelms; ++i){
        cout << lista.elm[i] << " ";
    }
}

int main()
{
    Lista lista;
    int K = leer(lista);
    crear(lista);
    tachar_cero_uno(lista);
    tachar_multiplos(lista, K);
    mostrar_lista(lista);
}
