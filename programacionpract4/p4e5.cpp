#include <iostream>

using namespace std;

int leer (int& x, int& y)
{
    cout << "Introduzca un intervalo (dos números): ";
    cin >> x >> y;
}

int divs (int x)
{
    int res = 0;
    for (int i = 1; i < x; ++i){
        if (x % i == 0){
            res += i;
        }
    }
    return res;
}

bool amigos (int n1, int n2)
{
    bool comprobante = false;
    if ((divs(n1) == n2) && (divs(n2) == n1) && (n1 != n2)){
        comprobante = true;
    }
    return comprobante;
}

int mostrar_amigos (int n1, int n2)
{
    int valor1;
    int valor2;
    int aux1, aux2;
    for (valor1 = n1; valor1 <= n2; ++valor1){
        for(valor2 = n1; valor2 <= n2; ++valor2){
            if (amigos(valor1,valor2)){
                cout << "Amigos: " << valor1 << ", " << valor2 << endl;
                aux1 = valor1;
                aux2 = valor2;
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
        mostrar_amigos(num1,num2);
    }
}
