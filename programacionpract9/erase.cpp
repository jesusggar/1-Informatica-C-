#include <iostream>
#include <string>

int main() {
    std::string texto = "Hola Mundo";
    int posicion_a_eliminar = 6; // índice del carácter que quieres eliminar

    if (posicion_a_eliminar >= 0 && posicion_a_eliminar < texto.length()) {
        texto.erase(posicion_a_eliminar, 1); // eliminar 1 carácter en la posición dada
        std::cout << "Texto después de eliminar: " << texto << std::endl;
    } else {
        std::cout << "Índice fuera de rango." << std::endl;
    }

    return 0;
}
