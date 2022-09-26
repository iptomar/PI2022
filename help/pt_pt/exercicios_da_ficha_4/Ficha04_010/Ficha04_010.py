# Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import math

r1 =  float(input("Número real \t: "))
r2 =  float(input("Número real \t: "))
r3 =  float(input("Soma real \t: "))
soma = r1 + r2 
distancia = abs( soma - r3 ) 
precisao = 1.0E-5 
print(r1 ,  " + ", r2 ,  " \t= ", r3 ,  " => " , end="")
if distancia < precisao  :
    print( "Verdadeiro" , end="")
else:
    print( "Falso" , end="")

print( "\n\n", r1 ,  " + ", r2 ,  " \t= ", ( r1 + r2 )  , end="")
print( "\nDistância \t: ", distancia  , end="")
print( "\nPrecisão \t: ", precisao  , end="")


#Python 3  - Automatic translated by Algorithmi 22.05
#(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:32
