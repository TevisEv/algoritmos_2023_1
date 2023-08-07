#include <iostream>
using namespace std;

// Función que convierte una nota en una letra según el sistema de calificación
char convertirNota(float nota) {
    if (nota >= 19) {
        return 'A';
    } else if (nota > 15) {
        return 'B';
    } else if (nota > 12) {
        return 'C';
    } else if (nota >= 9.5) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    float nota;

    // Bucle infinito hasta que se ingrese una nota válida
    while (true) {
        cout << "Ingrese la nota (0-20): ";
        cin >> nota;

        if (nota >= 0 && nota <= 20) {
            char letra = convertirNota(nota);
            cout << "La nota " << nota << " es igual: " << letra << endl;
            break;  // Salir del bucle cuando se ingrese una nota válida
        } else {
            cout << "La nota debe estar en el rango de 0 a 20." << endl;
        }
    }

    return 0;
}
