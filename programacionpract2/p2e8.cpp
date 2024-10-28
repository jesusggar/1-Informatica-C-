#include <iostream>

using namespace std;

int main()
{
    int codigo;
    cout << "Introduzca el codigo numerico de 4 digitos: ";
    cin >> codigo;

    if ((codigo > 999) && (codigo < 10000)) {
        int provincia = codigo / 1000;
        int resto = provincia * 1000;
        int operacion = (codigo - resto) / 10;
        int resto2 = operacion * 10;
        int control = (codigo - resto - resto2);

        cout << "Provincia: " << provincia << endl;
        cout << "Numero de operacion: " << operacion << endl;
        cout << "Digito de control: " << control << endl;

        if ((operacion * provincia) % 10 == control){
            cout << "Comprobacion: Correcto" << endl;

        }else{
            cout << "Comprobacion: Error" << endl;

        }
    }else{
        cout << "Codigo erroneo.";
        
    }
}