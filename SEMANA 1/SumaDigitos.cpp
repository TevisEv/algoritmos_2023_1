#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0;

    cout << "Ingrese un número: ";
    cin >> numero;

    int numOriginal = numero;

    while (numero != 0) {
        int digito = numero % 10;
        suma += digito;
        numero /= 10;
    }

    cout << "La suma de los dígitos de " << numOriginal << " es: " << suma << endl;

    return 0;
}
