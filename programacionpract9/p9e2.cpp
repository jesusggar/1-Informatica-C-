#include <iostream>
#include <array>
#include <string>

using namespace std;

typedef array<char, 6> Fila;
typedef array<Fila, 6> Matriz;

const Matriz CLAVE = {{
    {{'p','k','a','f','5','v'}},
    {{'e','9','o','t','y','0'}},
    {{'s','3','z','7','d','j'}},
    {{'r','n','b','u','m','1'}},
    {{'2','w','4','h','8','g'}},
    {{'c','x','6','q','i','l'}},
}};

void filtrar (string& cadena)
{
    for (int i = 0; i < cadena.size(); ++i){
        if ((cadena[i] < '0')||((cadena[i] > '9')&&(cadena[i] < 'a'))||(cadena[i] > 'z')){
            cadena.erase(i,1);
        }
    }
}

void buscar (char letra, const Matriz& CLAVE, int& f, int& c)
{
    for (int i = 0; i < CLAVE.size(); ++i){
        for (int a = 0; a < CLAVE[i].size(); ++a){
            if (CLAVE[i][a] == letra){
                f = i;
                c = a;
            }
        }
    }
}

void cifrar (string& cad, string& cad_cif, const Matriz& CLAVE)
{
    if (cad.size() % 2 != 0){
        cad.erase(cad.size()-1);
    }
    cad_cif = cad;
    int f1, c1, f2, c2;
    for (int i = 0; i < cad.size(); i = i + 2){
        f1 = 0;
        c1 = 0;
        f2 = 0;
        c2 = 0;
        buscar(cad[i], CLAVE, f1, c1);
        buscar(cad[i+1], CLAVE, f2, c2);
        cad_cif[i] = CLAVE[f1][f2];
        cad_cif[i+1] = CLAVE[c1][c2];
    }
    cout << "Cifrado: [" << cad_cif << "]" << endl;
}

void descifrar (string& cad_cif, string& cad_descif, const Matriz& CLAVE)
{
    cad_descif = cad_cif;
    int f1, c1, f2, c2;
    for (int i = 0; i < cad_cif.size(); i = i + 2){
        f1 = 0;
        c1 = 0;
        f2 = 0;
        c2 = 0;
        buscar(cad_cif[i], CLAVE, f1, c1);
        buscar(cad_cif[i+1], CLAVE, f2, c2);
        cad_descif[i] = CLAVE[f1][f2];
        cad_descif[i+1] = CLAVE[c1][c2];
    }
    cout << "Descifrado: [" << cad_descif << "]" << endl;
}

int main()
{
    string cadena;
    string cadena_cifrada;
    string cadena_descifrada;
    cout << "Introduzca el texto (sin espacios): ";
    cin >> cadena;
    filtrar(cadena);
    cout << "Entrada: [" << cadena << "]" << endl;
    cifrar(cadena, cadena_cifrada, CLAVE);
    descifrar(cadena_cifrada, cadena_descifrada, CLAVE);
}
