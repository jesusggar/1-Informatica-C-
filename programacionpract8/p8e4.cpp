#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

const int NFILS = 3;
const int NCOLS = 4;

typedef array<int, NCOLS> Filas;
typedef array<Filas, NFILS> Matriz;

struct TMatriz
{
    int k = 0;
    Matriz elm;
};

struct Estructura
{
    int num = 0;
    int repe = 0;
};

typedef array<Estructura, NCOLS*NFILS> Repeticiones;

struct TRepeticiones
{
    int nelms=0;
    Repeticiones elm;
};

void leer(TMatriz& m)
{
    cout << "Introduzca k: ";
    cin >> m.k;
    cout << "Introduzca la matriz 3x4 (por filas): " << endl;
    for (int f = 0; f < int(m.elm.size()); ++f) {
        for (int c = 0; c < int(m.elm[f].size()); ++c) {
            cin >> m.elm[f][c];
        }
    }
}


void rep_num(const TMatriz& m, int f, int c, int& nrep)
{
    for (int f2 = 0; f2 < int(m.elm.size()); ++f2) {
        for (int c2 = 0; c2 < int(m.elm[f].size()); ++c2) {
            if(m.elm[f2][c2]==m.elm[f][c])
            {
                ++nrep;
            }
        }
    }
}

bool no_colocado(const TRepeticiones& rep, const TMatriz& m, int f, int c)
{
    bool ok=true;
    for (int c2 = 0; c2 < rep.nelms; ++c2) {
        if(m.elm[f][c]==rep.elm[c2].num){
            ok = false;
        }
    }
    return ok;
}

void menor_repetido(const TRepeticiones& rep, int& fila)
{
    int mennum=rep.elm[0].repe;

    for (int c2 = 0; c2 < rep.nelms; ++c2) {
        if(rep.elm[c2].repe<mennum){
            mennum = rep.elm[c2].repe;
            fila = c2;
        }
    }
}

void calc_kmay(const TMatriz& m, TRepeticiones& rep)
{

    for (int f = 0; f < int(m.elm.size()); ++f) {

        for (int c = 0; c < int(m.elm[f].size()); ++c) {
            int nrep = 0;
            if(rep.nelms<m.k && no_colocado(rep, m, f, c))
            {

                ++rep.nelms;
                rep.elm[rep.nelms-1].num = m.elm[f][c];
                rep_num(m,f,c, nrep);
                rep.elm[rep.nelms-1].repe = nrep;


            }else{
                int fila;
                rep_num(m,f,c, nrep);
                menor_repetido(rep,fila);
                    if(nrep > rep.elm[fila].repe && no_colocado(rep, m, f, c)){
                        rep.elm[fila].num = m.elm[f][c];
                        rep.elm[fila].repe = nrep;
                    }
            }
        }
    }
}

void mostrar_res(const TRepeticiones& rep)
{
    cout << "Los valores que mas se repiten son: ";
    for (int i = 0; i < rep.nelms; i++)
    {
        cout << rep.elm[i].num << " ";
    }

}

int main()
{
    TMatriz m;
    TRepeticiones rep;
    leer(m);
    calc_kmay(m, rep);
    mostrar_res(rep);

}
