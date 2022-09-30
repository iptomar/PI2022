# Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

import math

r1 =  float(input("Actual number \t: "))
r2 =  float(input("Actual number \t: "))
r3 =  float(input("Actual Sum \t: "))
sum = r1 + r2 
distance = abs( sum - r3 ) 
precision = 1.0E-5 
print(r1 ,  " + ", r2 ,  " \t= ", r3 ,  " => " , end="")
if distance < precision  :
    print( "True" , end="")
else:
    print( "False" , end="")

print( "\n\n", r1 ,  " + ", r2 ,  " \t= ", ( r1 + r2 )  , end="")
print( "\nDistance \t: ", distance  , end="")
print( "\nPrecision \t: ", precision  , end="")


#Python 3  - Automatic translated by Algorithmi 22.05
#(c) Ant0nio M@nso 	domingo, 2022 set 18 23:28
