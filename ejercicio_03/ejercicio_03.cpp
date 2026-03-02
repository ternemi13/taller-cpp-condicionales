#include <iostream>
using namespace std;

int main() {

    
    const int LEER     = 0b001;
    const int ESCRIBIR = 0b010;
    const int EJECUTAR = 0b100;

    int permisos;

    cout << "ingrese el valor de permisos (0-7): ";
    cin >> permisos;

    cout << "\npermisos activos:\n";

    if (permisos & LEER) {
        cout << "- Puede LEER\n";
    }

    if (permisos & ESCRIBIR) {
        cout << "- puede ESCRIBIR\n";
    }

    if (permisos & EJECUTAR) {
        cout << "- puede EJECUTAR\n";
    }

    if (permisos == 0) {
        cout << "no tiene permisos\n";
    }

    return 0;
}

