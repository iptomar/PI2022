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
def tronco(n, ch):
    for i in range(0, n, 1 ):
        for j in range(0, n - 1, 1 ):
            print( " " , end="")
        print(ch)

if __name__ == "__main__":
    alt = 0 
    while True  :
        alt =  int(input("Altura   : "))
        if alt % 2 == 0 and alt >= 4  :
            break
        
        print( "\tValor errado")
    txt =  str(input("Caractér : "))
    copa(alt / 2 , txt )
    tronco(alt / 2 , txt )


#Python 3  - Automatic translated by Algorithmi 22.05
#(c) Ant0nio M@nso 	quarta, 2022 out 12 20:17
