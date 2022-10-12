# Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0


#::::::::::::::::::::::::::::::::::::::::::::::::::
#User Defined Functions Code
#::::::::::::::::::::::::::::::::::::::::::::::::::
def line(n):
    for i in range(0, n, 1 ):
        print( "*" , end="")
    print()

if __name__ == "__main__":
    Height =  int(input("height : "))
    for i in range(1, Height + 1, 1 ):
        line(i )


#Python 3  - Automatic translated by Algorithmi 22.05
#(c) Ant0nio M@nso 	quarta, 2022 out 12 20:22
