# Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0


num =  int(input("Decimal : "))
binary = "" 
while num > 0  :
    binary =  str(num % 2) + binary
    num = num // 2
print( "Binary = ", binary  , end="")


#Python 3  - Automatic translated by Algorithmi 22.05
#(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:12
