#include <iostream>
#include <array>
#include <string>

using namespace std;

const int MAXELMS = 10;

struct Longitudes{
    int lon;
    int rep = 0;
};

typedef array<Longitudes, MAXELMS> Datos;

struct Dato{
    int nelms = 0;
    Datos elm;
};

bool existe (int tam, const Dato& dt)
{
    bool comprobante = false;
    for (int i = 0; i < dt.nelms; ++i){
        if (dt.elm[i].lon == tam){
            comprobante = true;
        }
    }
    return comprobante;
}

void procesar (const string& pal, Dato& dt)
{
    int tam = pal.size();
    if (existe(tam, dt)){
        for (int i = 0; i < dt.nelms; ++i){
            if (dt.elm[i].lon == tam){
                ++dt.elm[i].rep;
            }
        }
    }else if (dt.nelms <= MAXELMS){
        dt.elm[dt.nelms].lon = tam;
        ++dt.elm[dt.nelms].rep;
        ++dt.nelms;
    }
}

void procesar_secuencia (Dato& dt)
{
    string palabra;
    cout << "Introduzca un texto (fin para terminar): ";
    cin >> palabra;
    while (palabra != "fin"){
        procesar(palabra, dt);
        cin >> palabra;
    }
}

void mostrar_long_rep (Dato& dt)
{
    cout << "Longitudes Repeticiones" << endl;
    for (int i = 0; i < dt.nelms; ++i){
        cout << dt.elm[i].lon << "          " << dt.elm[i].rep << endl;
    }
}

int main()
{
    Dato dt;
    procesar_secuencia(dt);
    mostrar_long_rep(dt);
}
