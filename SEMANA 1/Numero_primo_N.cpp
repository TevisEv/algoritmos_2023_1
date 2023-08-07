#include <iostream>
using namespace std;
//funcion principal
int main() {
    int N;

    cout << "Ingrese un valor para N: ";
    cin >> N;

    int numero = 2;  // Comenzamos desde el primer número primo

    while (numero <= N) {
        bool es_primo = true;

        for (int i = 2; i <= numero / 2; ++i) {
            if (numero % i == 0) {
                es_primo = false;
                break;
            }
        }

        if (es_primo) {
            cout << numero << " ";
        }

        ++numero;
    }

    cout << endl;

    return 0;
}
