notas = []
opcion = 0

while opcion != 3:
    print("""Menú
    1. Ingresar notas
    2. Calcular promedio
    3. Salir""")
    
    try:
        opcion = int(input("Ingrese una opción: "))
        
        if opcion == 1:
            while True:
                try:
                    nota = float(input("Ingrese la nota: "))
                    if 0 <= nota <= 20:
                        notas.append(nota)
                        break  # Salimos del bucle cuando la nota es válida
                    else:
                        print("La nota debe estar en el rango de 0 a 20")
                except ValueError:
                    print("Error: Ingrese un valor numérico válido para la nota.")
            
        elif opcion == 2:
            if notas:
                promedio = sum(notas) / len(notas)
                print("El promedio es:", promedio)
            else:
                print("No se han ingresado notas")
                
        elif opcion == 3:
            print("Saliendo...")
        
        else:
            print("Opción inválida. Por favor, ingrese una opción válida (1, 2 o 3).")
            
    except ValueError:
        print("Error: Ingrese un valor numérico válido para la opción.")

print("Programa finalizado")