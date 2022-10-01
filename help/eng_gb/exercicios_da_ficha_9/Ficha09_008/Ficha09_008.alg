// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

    begin 
        write "Fibonaci sequence sum\n "
        integer f0 = 1
        integer f1 = 1
        write f0 + " " + f1
        integer sum = 2
        while f0 + f1 < 100 do
            integer fn = f0 + f1
            sum += fn
            write " " + fn
            f1 = f0
            f0 = fn
        end
        write "\nSum = " + sum
    end 


//pseudocode  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:11
