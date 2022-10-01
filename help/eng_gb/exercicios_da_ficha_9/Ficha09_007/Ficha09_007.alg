// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

    begin 
        integer f0 = 1
        integer f1 = 1
        write f0 + "\n" + f1 + "\n"
        while f0 + f1 < 100 do
            integer fn = f0 + f1
            write fn + "\n"
            f1 = f0
            f0 = fn
        end
    end 


//pseudocode  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:11
