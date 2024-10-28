#include <iostream>
#include <array>

using namespace std;

struct Elementos{
char Nombre;
double Votos;
};

struct TPartidos{
Elementos partido;
};

const int MAX_PARTIDOS = 10;
const int MAX_CARGOS = 15;

typedef array<TPartidos,MAX> Convocatoria;

void leer(Convocatoria& v, int& partidos, int& cargos)
{
    cout<<"Introduzca el numero de cargos (>= 1 y <= 15): ";
    cin>>cargos;
    cout<<"Introduzca el numero de partidos (>= 1 y <= 10): ";
    cin>>partidos;
    cout<<"Introduzca el nombre y numero de votos por partido: ";
    cout<<endl;
    for(int i = 1 ;i <= partidos; i++){
        cout<< "Partido " << i << ": ";
        cin>> v[i].partido.Nombre;
        cin>> v[i].partido.Votos;
    }
}

void elecciones(const Convocatoria& v, int cargos, int partidos)
{
    for(int i = 1; i<=cargos; i++){
        for(int f = 1; f <= partidos; f++){
            int resultado = v[f].partido.Votos/i;
            cout<<resultado<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    Convocatoria v;
    int partidos;
    int cargos;
    leer(v, partidos, cargos);
    elecciones(v, cargos, partidos);
}
