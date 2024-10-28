#include <iostream>

using namespace std;

int main()
{
    double num;
    cout << "Introduzca una secuencia de numeros (separados por espacios) terminada en cero: " << endl;
    cin >> num;
    if (num == 0){
        cout << "Secuencia vacia.";
    }else{
        double num_menor = num;
        double num_mayor = num;
        int cont = 0;
        double suma_total = 0;
        while (num != 0) {
            if (num >= num_mayor){
                num_mayor = num;
            }
            if (num <= num_menor){
                num_menor = num;
            }
            ++cont;
            suma_total+=num;
            cin >> num;
        }
        double media = suma_total / cont;
        cout << "Mayor: " << num_mayor << endl
             << "Menor: " << num_menor << endl
             << "Media: " << media << endl;
        }
}
