# Programador           -


#::::::::::::::::::::::::::::::::::::::::::::::::::
#User Defined Functions Code
#::::::::::::::::::::::::::::::::::::::::::::::::::
def linhaCopa(sp, chars, txt):
    for i in range(0, sp, 1 ):
        print( " " , end="")
    for i in range(0, chars, 1 ):
        print(txt  , end="")
    print()

#::::::::::::::::::::::::::::::::::::::::::::::::::
def copa(alt, txt):
    for i in range(1, alt + 1, 1 ):
        sp = alt - i 
        chrs1 = i * 2 - 1 
        linhaCopa(sp , chrs1 , txt )

#::::::::::::::::::::::::::::::::::::::::::::::::::
def pinheiro(c, n, txt):
    for i in range(0, c, 1 ):
        copa(n , txt )

if __name__ == "__main__":
    copas =  int(input("Copas    : "))
    alt =  int(input("Altura   : "))
    char =  str(input("Caractér : "))
    pinheiro(copas , alt , char )


#Python 3  - Automatic translated by Algorithmi 22.05
#(c) Ant0nio M@nso 	quarta, 2022 out 12 20:16
