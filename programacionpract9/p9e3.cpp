#include <iostream>
#include <array>
#include <string>
using namespace std;

const int MAX=15;

struct Palabra{
    string palabra;
    int pripos;
    int ultpos;
};

typedef array <Palabra, MAX>Datos;

struct Lista{
    Datos elm;
    int nelms=0;
};

int buscar(const Lista& lista, const string& palabra){
    int i=0;
    while(i<lista.nelms && palabra!=lista.elm[i].palabra){
        i++;
    }
    return i;
}

void anyadir(Lista& lista, const string& pal, int pos){
    int idx=buscar(lista, pal);
    if(idx<lista.nelms){
        lista.elm[idx].ultpos=pos;
    }else if(lista.nelms<int(lista.elm.size())){
        lista.elm[lista.nelms].palabra=pal;
        lista.elm[lista.nelms].pripos=pos;
        lista.elm[lista.nelms].ultpos=pos;
        lista.nelms++;
    }
}

void estadisticas(Lista& lista){
    int pos=0;
    string pal;
    cout<<"Introduce el texto en minusculas (hasta fin): ";
    cin>>pal;
    while(pal!="fin"){
        pos++;
        anyadir(lista, pal, pos);
        cin>>pal;
    }
}

void mostrar(const Lista& lista){
    for(int i=0;i<lista.nelms;i++){
        cout<<lista.elm[i].palabra<<" "<<lista.elm[i].pripos<<" "<<lista.elm[i].ultpos<<endl;
    }
}

int main(){
    Lista lista;
    estadisticas(lista);
    mostrar(lista);
}
