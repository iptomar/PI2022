# Programador           -


#::::::::::::::::::::::::::::::::::::::::::::::::::
#User Defined Functions Code
#::::::::::::::::::::::::::::::::::::::::::::::::::
def linha(n, c):
    for i in range(0, n, 1 ):
        print(c  , end="")
    print()

#::::::::::::::::::::::::::::::::::::::::::::::::::
def interior(n, cl, ci):
    print(cl  , end="")
    for i in range(1, n - 1, 1 ):
        print(ci  , end="")
    print(cl)

#::::::::::::::::::::::::::::::::::::::::::::::::::
def caixa(larg, alt, cl, ci):
    linha(larg , cl )
    for i in range(1, alt - 1, 1 ):
        interior(larg , cl , ci )
    linha(larg , cl )

if __name__ == "__main__":
    altura =  int(input("Altura   : "))
    largura =  int(input("Largura  : "))
    limite =  str(input("Limite   : "))
    interior =  str(input("Interior : "))
    caixa(largura , altura , limite , interior )


#Python 3  - Automatic translated by Algorithmi 22.05
#(c) Ant0nio M@nso 	quarta, 2022 out 12 20:14
