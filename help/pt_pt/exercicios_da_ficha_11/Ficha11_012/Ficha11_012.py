# Programador           -


#::::::::::::::::::::::::::::::::::::::::::::::::::
#User Defined Functions Code
#::::::::::::::::::::::::::::::::::::::::::::::::::
def linhaC(n, c):
    for i in range(0, n, 1 ):
        print(c  , end="")
    print()

#::::::::::::::::::::::::::::::::::::::::::::::::::
def trianguloC(altura, c):
    for i in range(1, altura + 1, 1 ):
        linhaC(i , c )

if __name__ == "__main__":
    altura =  int(input("Altura : "))
    c =  str(input("Caractér : "))
    trianguloC(altura , c )


#Python 3  - Automatic translated by Algorithmi 22.05
#(c) Ant0nio M@nso 	quarta, 2022 out 12 20:12
