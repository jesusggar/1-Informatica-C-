#include <iostream>

using namespace std;

int leer (int& x, int& y)
{
    cout << "Introduzca un intervalo (dos números): ";
    cin >> x >> y;
}

int euclides (int n1, int n2)
{
    int resto;
    while (n1 != n2){
        if (n1 > n2){
            resto = n1 - n2;
            n1 = resto;
        }else{
            resto = n2 - n1;
            n2 = resto;
        }
    }
    return n1;
}

bool coprimos (int n1, int n2)
{
    bool comprobante = false;
    if (euclides(n1,n2) == 1){
        comprobante = true;
    }
    return comprobante;
}

int mostrar_coprimos (int n1, int n2)
{
    int valor1;
    int valor2;
    for (valor1 = n1; valor1 <= n2; ++valor1){
        for(valor2 = valor1; valor2 <= n2; ++valor2){
            if (coprimos(valor1,valor2)){
                cout << "Coprimos: " << valor1 << ", " << valor2 << endl;
            }
        }
    }
}

int main()
{
    int num1, num2;
    leer(num1,num2);
    if ((num1 <= 0) || (num2 <= 0) || (num1 >= num2)){
        cout << "Error" << endl;
    }else{
        mostrar_coprimos(num1,num2);
    }
}
