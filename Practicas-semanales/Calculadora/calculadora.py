import math

def suma(numero1, numero2):
    return numero1 + numero2

def resta(numero1, numero2):
    return numero1 - numero2

def multiplicacion(numero1, numero2):
    return numero1 * numero2

def division(numero1, numero2):
    if numero2 == 0:
        print("No se puede dividir por cero")
        return 0
    return numero1 / numero2

def potencia(numero1, numero2):
    resultado = 1
    if numero2 > 0:
        for i in range(1, numero2 + 1):
            resultado *= numero1
    elif numero2 < 0:
        for i in range(1, abs(numero2) + 1):
            resultado /= numero1
    return resultado


def raiz(numero1):
    resultado = numero1**.5
    return resultado
    
print("Bienvenido a la calculadora")

continuar = True

while continuar:
    
    opc = input("Ingresa la opcion para la operacion que deseas realizar +, -, *, /, p (potencia), r (raiz), x para salir:\n ")
    
    if opc == "x":
        print("Adioooooos!")
        continuar = False
        break
    elif opc not in ['+', '-', '*', '/', 'p', 'r']:
        print("Operación inválida!")
        continue
    
    numero1 =int(input("Ingresa el primer numero -> "))
    numero2 =int(input("(En caso de ser potencia poner el exponente o raiz poner 0)\nIngresa el primer numero -> "))
    
    if opc == '+':
        resultado = suma(numero1, numero2)
        print(f"El resultado de {numero1} {opc} {numero2} es: {resultado:.2f}")
    elif opc == '-':
        resultado = resta(numero1, numero2)
        print(f"El resultado de {numero1} {opc} {numero2} es: {resultado:.2f}")
    elif opc == '*':
        resultado = multiplicacion(numero1, numero2)
        print(f"El resultado de {numero1} {opc} {numero2} es: {resultado:.2f}")
    elif opc == '/':
        if numero2 != 0:
            resultado = division(numero1, numero2)
            print(f"El resultado de {numero1} {opc} {numero2} es: {resultado:.2f}")
        else:
            print("No se puede dividir por cero")
    elif opc == 'r':
        if numero1 <= 0:
            print("No se puede calcular la raíz cuadrada de un número negativo o cero.")
        else:
            resultado = raiz(numero1)
            print(f"La raíz de {numero1} es {resultado:.2f}")
    elif opc == 'p':
        resultado = potencia(numero1, numero2)
        print(f"El resultado de {numero1} a la potencia {numero2} es: {resultado:.2f}")
    
    
