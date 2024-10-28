#include <iostream>
#include <array>

using namespace std;

const int MAX_ELMS = 1000;
typedef array<double, MAX_ELMS> Elementos;
struct Secuencia{
    int nelms = 0;
    Elementos elm;
};

void anyadir_elemento(Secuencia& secuencia, int valor)
{
    if (secuencia.nelms < int(secuencia.elm.size())){
        secuencia.elm[secuencia.nelms] = valor;
        secuencia.nelms++;
    }else{
        cout << "Error" << endl;
    }
}

void leer (Secuencia& secuencia)
{
    int valor;
    cout << "Introduzca una secuencia de numeros (hasta negativo): ";
    cin >> valor;
    while (valor >= 0){
        anyadir_elemento(secuencia, valor);
        cin >> valor;
    }
}

int num_mas_repetido (const Secuencia& secuencia)
{
    int cont = 0;
    int cont_mayor = 0;
    for (int i = 0; i <= 9; ++i){
        for (int a = 0; a < secuencia.nelms; ++a){
            if (secuencia.elm[a] == i){
                ++cont;
            }
        }
        if (cont > cont_mayor){
            cont_mayor = cont;
        }
        cont = 0;
    }
    return cont_mayor;
}

void asteriscos (Secuencia& secuencia, int fila)
{
    for (int i = 0; i < secuencia.nelms; ++i){
        if (secuencia.elm[i] <= fila){
            cout << "* ";
        }else{
            cout << "  ";
        }
    }
    cout << endl;
}

void numeros (int n)
{
    for (int i = 0; i <= n; ++i){
        cout << i << " ";
    }
    cout << endl;
}

void guiones (int n)
{
    for (int i = 0; i < n; ++i){
        cout << "-";
    }
    cout << endl;
}

void histograma (Secuencia& secuencia, int fila)
{
    guiones(10 * 2 - 1);
    for (int i = fila; i > 0; --i){
        asteriscos(secuencia,i);
    }
    guiones(10 * 2 - 1);
    numeros(9);
}

int main()
{
    Secuencia secuencia;
    leer(secuencia);
    int altura = num_mas_repetido(secuencia);
    histograma(secuencia, altura);
}
