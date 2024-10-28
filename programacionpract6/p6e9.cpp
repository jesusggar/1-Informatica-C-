#include <iostream>
#include <array>
#include <string>

using namespace std;

const int MAX = 10;
typedef array <int, MAX> Numeros;

struct TLista{
    int nelms = 0;
    Numeros elm;
};

void leer_cant (TLista& lista)
{
    cout << "Cuantos numeros desea introducir (maximo 10): ";
    cin >> lista.nelms;
}

void leer_numeros (TLista& lista)
{
    cout << "Introduzca " << lista.nelms << " numeros: ";
    for (int i = 0; i < lista.nelms; ++i){
        cin >> lista.elm[i];
    }
    cout << "Introduzca el numero de repeticiones para realizar la criba: ";
}

int veces (TLista& lista1, int n)
{
    int cont = 0;
    for (int i = 0; i < lista1.nelms; ++i){
        if (n == lista1.elm[i]){
            ++cont;
        }
    }
    return cont;
}

void crear_lista_res (TLista& lista1, TLista lista2, int x)
{
    int n;
    for (int i = 0; i < lista1.nelms; ++i){
        n = lista1.elm[i];
        int rep = veces(lista1, n);
        if (rep == x){
            lista2.nelms++;
            lista2.elm[i] = n;
        }
    }
    cout << "La lista cribada es: ";
    for (int i = 0; i < lista2.nelms; ++i){
        cout << lista2.elm[i] << " ";
    }
    cout << endl;
}

int main()
{
    TLista lista1, lista2;
    int x;
    leer_cant(lista1);
    if (lista1.nelms > MAX){
        cout << "Error" << endl;
    }else{
        leer_numeros(lista1);
        cin >> x;
        crear_lista_res(lista1, lista2, x);
    }
}
