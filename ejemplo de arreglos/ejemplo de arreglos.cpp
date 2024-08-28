
#include <iostream>
using namespace std;

int main() {
    // Crear un arreglo con los números 10, 20, 30, 40, 50, 60
    int numeros[6] = { 10, 20, 30, 40, 50, 60 };

    // Acceder a elementos
    cout << "El primer numero es: " << numeros[0] << endl;

    // Modificar un elemento (por ejemplo, cambiar el tercer elemento)
    numeros[2] = 100;  // Cambiamos 30 por 100
    cout << "Arreglo modificado: ";
    for (int i = 0; i < 6; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
