#include <iostream>
#include <string>
#include <array>

using namespace std;

const int NFILS = 7;
const int NCOLS = 12;

typedef array<char, NCOLS> Fila;
typedef array<Fila, NFILS> Matriz;

void leer_matriz (Matriz& m)
{
    cout << "Introduce la imagen de " << NFILS << " x " << NCOLS << " caracteres:" << endl;
    for (unsigned f = 0; f < m.size(); ++f){
        for (unsigned c = 0; c < m[f].size(); ++c){
            cin >> m[f][c];
        }
    }
}

int CalcularDiametro (Matriz& m)
{
    int diametro = 0;
    int diametro_total = 1;
    for (unsigned f = 0; (f < m.size())&&(diametro == 0); ++f){
        for (unsigned c = 0; (c < m[f].size())&&(diametro == 0); ++c){
            if (m[f][c] == '*'){
                diametro = 1;
                for (unsigned i = f+1; (i < m.size())&&(diametro_total == 1); ++i){
                    ++diametro;
                    if (m[i][c] == '*'){
                        diametro_total = diametro;
                    }
                }
            }
        }
    }
    return diametro_total;
}

int main()
{
    Matriz m;
    leer_matriz(m);
    int diametro = CalcularDiametro(m);
    cout << "Resultado: " << diametro << endl;
}


