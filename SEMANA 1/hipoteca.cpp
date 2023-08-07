#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float monto_prestamo, tasa_interes_anual, tasa_interes_mensual;
    int años;

    cout << "Ingrese el monto del préstamo: ";
    cin >> monto_prestamo;

    cout << "Ingrese la tasa de interés anual (%): ";
    cin >> tasa_interes_anual;

    cout << "Ingrese el número de años: ";
    cin >> años;

    // Convertir la tasa de interés anual a tasa mensual decimal
    tasa_interes_mensual = tasa_interes_anual / 100 / 12;

    // Calcular el número total de pagos
    int numero_pagos = años * 12;

    // Calcular el pago mensual utilizando la fórmula de cuota hipotecaria
    float pago_mensual = (monto_prestamo * tasa_interes_mensual) /
                        (1 - pow(1 + tasa_interes_mensual, -numero_pagos));

    cout << "El pago mensual de la hipoteca es: " << pago_mensual << " USD" << endl;

    return 0;
}
