# Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0


print( "Fibonaci sequence sum\n " , end="")
f0 = 1 
f1 = 1 
print(f0 ,  " ", f1  , end="")
sum = 2 
while f0 + f1 < 100  :
    fn = f0 + f1 
    sum = sum + fn
    print( " ", fn  , end="")
    f1 = f0
    f0 = fn
print( "\nSum = ", sum  , end="")


#Python 3  - Automatic translated by Algorithmi 22.05
#(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:11
