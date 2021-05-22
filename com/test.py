def fat(n):
    if n == 0:
        return 1
    else:
        return n * fat(n - 1)
print("")
print("Cálcular Fatorial")
print("")
n = int(input("Digite um número inteiro: "))

print(f"O Fatorial de {n} = {fat(n)}")
