#Obteniendo informacion del usuario
n1=int(input("ingresa el primer numero-> "))
n2=int(input("ingresa el segundo numero-> "))
operacion=input("ingresa el signo de la operacion que quieres realizar-> ")
#Funciones de operacion
def suma(a,b):
    resultado = n1+n2
    return resultado
def resta(a,b):
    resultado =n1-n2
    return resultado
def multiplicacion(a,b):
    resultado = n1*n2
    return resultado
def division(a,b):
    resultado = n1/n2
    return resultado
#Condicionantes segun la operacion
if operacion=="+":
    print("La suma es",suma(n1,n2))
elif operacion=="-":
    print("La resta es ",resta(n1,n2))
elif operacion=="*":
    print("la multiplicacion es ",multiplicacion(n1,n2))
elif operacion=="/":
    print("la division es ",division(n1,n2))

