#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

const int N = 5;

typedef array<int,N> TFilas;
typedef array<TFilas,N> TMatriz;

void mas(int& x)
{
    if(x == N-1){
        x = 0;
    }else{
        ++x;
    }
}

void menos(int& x)
{
    if(x != 0){
        x--;
    }else{
        x = N-1;
    }
}

void sigCoordenada(TMatriz& m, int& f, int& c)
{
    menos(f);
    menos(c);
    if(m[f][c] != 0){
        mas(f);
        mas(f);
        mas(c);
    }
}

void inicializarMatriz(TMatriz& m)
{
    for(int f = 0; f < N; f++){
        for(int c = 0; c < N; c++){
            m[f][c] = 0;
        }
    }
    m[0][N/2] = 1;
}

void cuadradoMagico(TMatriz& m)
{
    int f = 0;
    int c = N/2;
    inicializarMatriz(m);
    for(int i = 2; i <= (N*N); i++){
        sigCoordenada(m,f,c);
        m[f][c] = i;
    }
}

void imprimirCuadrado(const TMatriz& m)
{
    for(int f = 0; f < N; f++){
        for(int c = 0; c < N; c++){
        cout << setw(3) << m[f][c] << " ";
        }
        cout<<endl;
    }
}

int main()
{
    TMatriz m;
    cout << "El cuadrado magico para N = " << N << " es:" << endl;
    cuadradoMagico(m);
    imprimirCuadrado(m);
}
