# Programador           -


#::::::::::::::::::::::::::::::::::::::::::::::::::
#User Defined Functions Code
#::::::::::::::::::::::::::::::::::::::::::::::::::
def linha(n):
    for i in range(0, n, 1 ):
        print( "*" , end="")
    print()

#::::::::::::::::::::::::::::::::::::::::::::::::::
def quadrado(altura):
    for i in range(1, altura + 1, 1 ):
        linha(altura )

if __name__ == "__main__":
    altura =  int(input("Altura : "))
    quadrado(altura )


#Python 3  - Automatic translated by Algorithmi 22.05
#(c) Ant0nio M@nso 	quarta, 2022 out 12 20:11
