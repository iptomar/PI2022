# Programador           -


#::::::::::::::::::::::::::::::::::::::::::::::::::
#User Defined Functions Code
#::::::::::::::::::::::::::::::::::::::::::::::::::
def linha(n):
    for i in range(0, n, 1 ):
        print( "*" , end="")
    print()

#::::::::::::::::::::::::::::::::::::::::::::::::::
def interior(n):
    print( "*" , end="")
    for i in range(1, n - 1, 1 ):
        print( " " , end="")
    print( "*")

#::::::::::::::::::::::::::::::::::::::::::::::::::
def caixa(larg, alt):
    linha(larg )
    for i in range(1, alt - 1, 1 ):
        interior(larg )
    linha(larg )

if __name__ == "__main__":
    altura =  int(input("Altura  : "))
    largura =  int(input("Largura : "))
    caixa(largura , altura )


#Python 3  - Automatic translated by Algorithmi 22.05
#(c) Ant0nio M@nso 	quarta, 2022 out 12 20:13
