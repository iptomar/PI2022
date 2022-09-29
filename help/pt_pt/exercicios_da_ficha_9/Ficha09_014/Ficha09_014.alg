// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

    begin 
        read integer num "Decimal : "
        string binario
        while num > 0 do
            binario = num % 2 + binario
            num /= 2
        end
        write "Binario = " + binario
    end 


//pseudocode  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:26
