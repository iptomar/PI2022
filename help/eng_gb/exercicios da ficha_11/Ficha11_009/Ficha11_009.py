# Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0


#::::::::::::::::::::::::::::::::::::::::::::::::::
#User Defined Functions Code
#::::::::::::::::::::::::::::::::::::::::::::::::::
def line(n):
    for i in range(0, n, 1 ):
        print( "*" , end="")
    print()

#::::::::::::::::::::::::::::::::::::::::::::::::::
def triangle(height):
    for i in range(1, height + 1, 1 ):
        line(i )

if __name__ == "__main__":
    height =  int(input("Height : "))
    triangle(height )


#Python 3  - Automatic translated by Algorithmi 22.05
#(c) Ant0nio M@nso 	quarta, 2022 out 12 20:23
