# Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import math

n =  int(input("Número de termos : "))
produto = 1 
for i in range(1, n + 1, 1 ):
    f = math.pow( i , 1.0 / 3 ) 
    produto = produto * f
print( "Resultado = ", produto  , end="")


#Python 3  - Automatic translated by Algorithmi 22.05
#(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:13
