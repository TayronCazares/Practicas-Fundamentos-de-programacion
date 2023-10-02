print("Vamos a calcular tu IMC")
print("Indice de Masa Corporal")

nombre = input("Ingresa tu nombre --> ")
peso = float(input("ingresa tu peso! --> "))
estatura = float(input("ingresa tu estatura! --> "))

estatura_mts = estatura/100
estatura_final = estatura_mts**2

imc = peso/estatura_final

print("Hey ",nombre,"! tu indice de masa corporal es de: ",imc)
