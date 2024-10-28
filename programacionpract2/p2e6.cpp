#include <iostream>

using namespace std;

const double pr_100 = 0.5;
const double pr_150 = 0.35;
const double pr_resto = 0.25;
const double pr_fijo = 1;
const double resto_precio2 = 0.5 * 100;
const double resto_precio3 = (0.35 * 150) + resto_precio2;


int main()
{
    double consumo;
    cout << "Introduzca el consumo del contador: ";
    cin >> consumo;
    if ((consumo >= 0) && (consumo <= 100)){
        double precio1 = (consumo * pr_100) + pr_fijo;
        cout << "Consumo: " << consumo << " Kwh. Importe: " << precio1 << endl;
    }
    if ((consumo > 100) && (consumo <= 250)){
        double precio2 = pr_150 * (consumo - 100) + resto_precio2 + pr_fijo;
        cout << "Consumo: " << consumo << " Kwh. Importe: " << precio2 << endl;
    }
    if (consumo > 250){
        double precio3 = pr_resto * (consumo - 250) + resto_precio3 + pr_fijo;
        cout << "Consumo: " << consumo << " Kwh. Importe: " << precio3 << endl;
    }
}
