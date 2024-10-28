#include <iostream>
#include <cmath>

using namespace std;

bool comprobar(int n1, int n2, int n3)
{
    bool comprobante = false;
    if (((n2 > n3)&&(n2 < n1)) || ((n2 < n3)&&(n2 > n1))){
        comprobante = true;
    }
    return comprobante;
}

int main()
{
    int secuencia;
    int cont = 0;
    cin >> secuencia;
    int valor1 = secuencia;
    int valor2 = 0;
    int valor3 = 0;
    bool comprobante;
    while ((secuencia != 0) || (comprobante = true)){
        ++cont;
        if (cont >= 3){
            valor1 = valor2;
            valor2 = valor3;
            valor3 = secuencia;
            comprobante = comprobar(valor1, valor2, valor3);
        }
        cin >> secuencia;
        if (cont == 1){
            valor2 = secuencia;
        }
    }
    if (cont < 2){
        cout << "La secuencia introducida SI es en zigzag";
    }else if (comprobante = false){
        cout << "La secuencia introducida NO es en zigzag";
    }else if (comprobante = true){
        cout << "La secuencia introducida SI es en zigzag";
    }
}
