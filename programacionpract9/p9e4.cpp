#include <iostream>
#include <array>
#include <string>

using namespace std;

bool esta_incluida (char letra, string& pal)
{
    bool comprobante = false;
    for (int i = 0; i < pal.size(); ++i){
        if (letra == pal[i]){
            comprobante = true;
        }
    }
    return comprobante;
}

void unionconj (string& op1, string& op2, string& res)
{
    res = op2;
    for (int i = 0; i < op1.size(); ++i){
        if (!esta_incluida(op1[i], res)){
            res = res + op1[i];
        }
    }
}

void intersec (string& op1, string& op2, string& res)
{
    for (int i = 0; i < op1.size(); ++i){
        if (esta_incluida(op1[i], op2)){
            res = res + op1[i];
        }
    }
}

void difer (string& op1, string& op2, string& res)
{
    for (int i = 0; i < op1.size(); ++i){
        if (!esta_incluida(op1[i], op2)){
            res = res + op1[i];
        }
    }
}

string operacion (string& op1, string& op2, char oper)
{
    string result;
    if (oper == '+'){
        unionconj(op1, op2, result);
    }else if (oper == '*'){
        intersec(op1, op2, result);
    }else if (oper == '-'){
        difer(op1, op2, result);
    }else{
        cout << "Error" << endl;
    }
    return result;
}

int main()
{
    string op1, op2;
    char oper;
    cout << "Introduzca la operacion a realizar (+,-,*) (& para terminar): ";
    cin >> oper;
    while (oper != '&'){
        cout << "Introduzca op1: ";
        cin >> op1;
        cout << "Introduzca op2: ";
        cin >> op2;
        string resultado = operacion (op1, op2, oper);
        cout << "El resultado es: " << resultado << endl;
        cout << "Introduzca la operacion a realizar (+,-,*) (& para terminar): ";
        cin >> oper;
    }
    cout << "Fin del programa" << endl;
}
