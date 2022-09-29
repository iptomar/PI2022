# Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0


print( "Soma da sequência de fibonacci\n " , end="")
f0 = 1 
f1 = 1 
print(f0 ,  " ", f1  , end="")
soma = 2 
while f0 + f1 < 100  :
    fn = f0 + f1 
    soma = soma + fn
    print( " ", fn  , end="")
    f1 = f0
    f0 = fn
print( "\nSoma = ", soma  , end="")


#Python 3  - Automatic translated by Algorithmi 22.05
#(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:25
