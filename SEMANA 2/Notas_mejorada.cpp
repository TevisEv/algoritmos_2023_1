#include <iostream>
using namespace std;

// Función para calcular promedio
float calcularPromedio(float notas[], int n)
{
    float suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += notas[i];
    }
    return suma / n;
}

// Función para clasificar nota
string clasificarNota(float nota)
{

    if (nota >= 0 && nota <= 20)
    {

        if (nota >= 19)
        {
            return "A";
        }
        else if (nota >= 16 && nota < 19)
        {
            return "B";
        }
        else if (nota >= 13 && nota < 16)
        {
            return "C";
        }
        else if (nota >= 9.5 && nota < 13)
        {
            return "D";
        }
        else
        {
            return "E";
        }
    }
    else
    {
        return "Error";
    }
}

// Función para contar notas por rango
void contarRangos(float notas[], int n, int &countA, int &countB, int &countC, int &countD, int &countE)
{

    for (int i = 0; i < n; i++)
    {

        string rango = clasificarNota(notas[i]);

        if (rango == "A")
        {
            countA++;
        }
        else if (rango == "B")
        {
            countB++;
        }
        else if (rango == "C")
        {
            countC++;
        }
        else if (rango == "D")
        {
            countD++;
        }
        else if (rango == "E")
        {
            countE++;
        }
    }
}
int main()
{

    float notas[] = {
        15,
        12,
        18.7,
        10,
        11.8,
        14,
        16,
        18,
        8.8,
        7.4

    };

    int countA = 0, countB = 0, countC = 0, countD = 0, countE = 0;

    float promedio = calcularPromedio(notas, 10);

    contarRangos(notas, 10, countA, countB, countC, countD, countE);

    // Imprimir resultados
    cout << "Promedio: " << promedio << endl;
    cout << "Notas en A: " << countA << endl;
    cout << "Notas en B: " << countB << endl;
    cout << "Notas en C: " << countC << endl;
    cout << "Notas en D: " << countD << endl;
    cout << "Notas en E: " << countE << endl;
    return 0;
}