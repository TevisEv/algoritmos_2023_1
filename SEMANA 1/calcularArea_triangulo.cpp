#include <iostream>
using namespace std;

int main() {
    float base, altura;

    cout << "Ingrese la base del triángulo: ";
    cin >> base;

    cout << "Ingrese la altura del triángulo: ";
    cin >> altura;

    float area = (base * altura) / 2.0;

    cout << "El área del triángulo es: " << area << endl;

    return 0;
}
