#include <iostream>
using namespace std;

int main() {
    int numero1, numero2, numero3;

    cout << "Ingrese el primer número: ";
    cin >> numero1;

    cout << "Ingrese el segundo número: ";
    cin >> numero2;

    cout << "Ingrese el tercer número: ";
    cin >> numero3;

    if (numero1 >= numero2 && numero1 >= numero3) {
        cout << "El mayor número es: " << numero1 << endl;
    } else if (numero2 >= numero1 && numero2 >= numero3) {
        cout << "El mayor número es: " << numero2 << endl;
    } else {
        cout << "El mayor número es: " << numero3 << endl;
    }

    return 0;
}
