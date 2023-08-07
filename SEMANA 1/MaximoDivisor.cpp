#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    int mcd = num1;

    cout << "El MCD de los números es: " << mcd << endl;

    return 0;
}
