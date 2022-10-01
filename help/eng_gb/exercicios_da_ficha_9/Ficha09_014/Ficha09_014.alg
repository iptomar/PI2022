// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

    begin 
        read integer num "Decimal : "
        string binary
        while num > 0 do
            binary = num % 2 + binary
            num /= 2
        end
        write "Binary = " + binary
    end 


//pseudocode  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:12
