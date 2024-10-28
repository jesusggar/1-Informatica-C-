#include <iostream>

using namespace std;

int main()
{
    int n;
    int num_total = 2;
    int cont = 0;
    int suma_num = 1;
    cout << "Introduzca el número de fracciones: " << endl;
    cin >> n;
    while (n <= 0){
        cout << "Error." << endl << "Introduzca el número de fracciones: " << endl;
        cin >> n;
    }
    for (int i = 0; n>i; i + 2){
        cont+= 2;
        num_total = cont * cont;
        suma_num = suma_num * num_total;
    }
    cout << num_total;
}
