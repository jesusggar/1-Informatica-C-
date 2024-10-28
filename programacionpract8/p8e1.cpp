#include <iostream>
#include <string>
#include <array>

using namespace std;

const int MAX_PALABRAS = 10;
typedef array<string, MAX_PALABRAS> Secuencia;

bool Incluida (string& palabra, Secuencia& s)
{
    bool comprobante = false;
    for (int i = 0; i < MAX_PALABRAS; ++i){
        if (s[i] == palabra){
            comprobante = true;
        }
    }
    return comprobante;
}

void procesar (string& palabra, string& patron, Secuencia& s)
{
    int cont = 0;
    for (unsigned i = 0; i < palabra.size(); ++i){
        string subc = palabra.substr(i, patron.size());
        if (subc == patron){
            if (!Incluida(palabra, s) && cont <= MAX_PALABRAS){
                s[i] = palabra;
                ++cont;
                cout << palabra << " ";
            }
        }
    }
}


void leer_texto (string& palabra, string& patron, Secuencia& s)
{
    cout << "Introduzca el texto en minusculas hasta (fin): " << endl;
    cin >> palabra;
    cout << "Resultado: " << endl;
    while (palabra != "fin") {
        procesar(palabra, patron, s);
        cin >> palabra;
    }
    cout << endl;
}

int main()
{
    Secuencia s;
    string patron;
    cout << "Introduzca el patron en minusculas: ";
    cin >> patron;
    string palabra;
    leer_texto(palabra, patron, s);
}
