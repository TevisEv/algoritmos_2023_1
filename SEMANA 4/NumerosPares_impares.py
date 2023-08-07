numeros_pares = []
numeros_impares = []

for numero in range(21):
    if numero % 2 == 0:
        numeros_pares.append(numero)
    else:
        numeros_impares.append(numero)

print("Números pares:", numeros_pares)
print("Números impares:", numeros_impares)
