// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

    begin 
        write "Soma da sequência de fibonacci\n "
        integer f0 = 1
        integer f1 = 1
        write f0 + " " + f1
        integer soma = 2
        while f0 + f1 < 100 do
            integer fn = f0 + f1
            soma += fn
            write " " + fn
            f1 = f0
            f0 = fn
        end
        write "\nSoma = " + soma
    end 


//pseudocode  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:25
