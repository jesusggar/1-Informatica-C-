#include <iostream>
#include <cmath>

using namespace std;

void leer (int& x)
{
    cout << "Introduce el numero de filas: ";
    cin >> x;
    while ((x <= 0) || (x >= 10)){
        cout << "Error. Introduce el numero de filas: ";
        cin >> x;
    }
}

void incremento_circular(int& x, int max)
{
    for (int i = 1; i <= max; ++i){
        cout << x;
        ++x;
        if (x == max){
            x = 0;
        }
    }
    cout << endl;
}


int main()
{
    int num_filas;
    leer(num_filas);
    for (int i = 0; i < num_filas; ++i){
        incremento_circular(i,num_filas);
    }
}
