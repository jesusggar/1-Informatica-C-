#include <iostream>
#include <string>
#include <array>

using namespace std ;

const int N_LETRAS = int ('z')- int ('a')+1;

typedef array <int , N_LETRAS> Frecuencia;

int letra_ind (char letra)
{
    int res = N_LETRAS ;
    if ( letra >= 'a' && letra <= 'z') {
        res = int(letra) - int('a');
    }
    return res;
}

void iniciar (Frecuencia& f)
{
    for (int i = 0; i < int(f.size()); ++i) {
        f[i] = 0;
    }
}

void frecuencia (const string& palabra, Frecuencia& f)
{
    iniciar (f);
    for (int i = 0; i < int (palabra.size()); ++i) {
        int indice = letra_ind (palabra[i]);
        if (indice < int(f.size())){
            ++f[indice];
        }
    }
}

bool es_anagrama (const string& palabra, const string& patron)
{
    bool res;
    if (int(palabra.size()) != int(patron.size())){
        res = false;
    }else {
        Frecuencia f1 , f2;
        frecuencia (palabra, f1);
        frecuencia (patron, f2);
        res = f1 == f2;
    }
    return res;
}

int contar_anagramas (const string & patron)
{
    int contador = 0;
    string palabra;
    cin >> palabra;
    while (palabra != "fin"){
        if (es_anagrama(palabra, patron)) {
            ++ contador;
        }
        cin >> palabra;
    }
    return contador;
}

int main()
{
    string patron;
    int contador = 0;
    cout << "Introduzca el texto en minusculas hasta (fin) con el anagrama a comprobar al principio." << endl ;
    cin >> patron;
    if (patron != "fin"){
        contador = contar_anagramas(patron);
    }
    cout << "En este texto hay " << contador << " anagramas como <" << patron << ">." << endl ;
}
