#include <iostream>

using namespace std;

int main()
{
    int num1, num2, result;
    char oper;
    cout << "Operacion (+ - * / &): ";
    cin >> oper;
    while (oper != '&'){
        if (oper == '+'){
            cout << "Operando 1: ";
            cin >> num1;
            cout << "Operando 2: ";
            cin >> num2;
            result = num1 + num2;
            cout << "Resultado: " << result << endl;
        }else if (oper == '-'){
            cout << "Operando 1: ";
            cin >> num1;
            cout << "Operando 2: ";
            cin >> num2;result = num1 - num2;
            cout << "Resultado: " << result << endl;
        }else if (oper == '*'){
            cout << "Operando 1: ";
            cin >> num1;
            cout << "Operando 2: ";
            cin >> num2;
            result = num1 * num2;
            cout << "Resultado: " << result << endl;
        }else if (oper == '/'){
            cout << "Operando 1: ";
            cin >> num1;
            cout << "Operando 2: ";
            cin >> num2;
            if (num2 != 0){
                result = num1 / num2;
                cout << "Resultado:  " << result << endl;
            }else{
                cout << "ERROR: Imposible dividir entre cero" << endl;
            }
        }else{
            cout << "ERROR: Operacion no valida" << endl;
        }
        cout << "Operacion (+ - * / &): ";
        cin >> oper;
    }
    cout << "FIN DEL PROGRAMA" << endl;

}
