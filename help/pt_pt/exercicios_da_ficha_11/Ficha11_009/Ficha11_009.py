# Programador           -


#::::::::::::::::::::::::::::::::::::::::::::::::::
#User Defined Functions Code
#::::::::::::::::::::::::::::::::::::::::::::::::::
def linha(n):
    for i in range(0, n, 1 ):
        print( "*" , end="")
    print()

#::::::::::::::::::::::::::::::::::::::::::::::::::
def triangulo(altura):
    for i in range(1, altura + 1, 1 ):
        linha(i )

if __name__ == "__main__":
    altura =  int(input("Altura : "))
    triangulo(altura )


#Python 3  - Automatic translated by Algorithmi 22.05
#(c) Ant0nio M@nso 	quarta, 2022 out 12 20:10
