#include <iostream>
#include <array>
#include <string>

using namespace std;

void leer (string& cadena)
{
    cout << "Introduzca una cadena: ";
    cin >> ws;
    getline(cin, cadena);
}

void mostrar_original (const string& cadena)
 {
     cout << "Cadena original: " << cadena << endl;
 }

 void mostrar_sinvocales (string& cadena)
{
    cout << "Cadena resultado: " << cadena << endl;
}

bool vocal (char x)
{
    return (x == 'a')||(x == 'e')||(x == 'i')||(x == 'o')||(x == 'u')
        ||(x == 'A')||(x == 'E')||(x == 'I')||(x == 'O')||(x == 'U');
}

void eliminar_vocales(string& cadena)
{
    string cadena_sin;
    for (unsigned i = 0; i < cadena.size(); ++i){
        if (!vocal(cadena[i])){
            cadena_sin += cadena[i];
        }
    }
    cadena = cadena_sin;
}

int main()
{
    string cadena;
    leer(cadena);
    mostrar_original(cadena);
    eliminar_vocales(cadena);
    mostrar_sinvocales(cadena);
}
