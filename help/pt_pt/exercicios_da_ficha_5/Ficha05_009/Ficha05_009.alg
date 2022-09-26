// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

    begin 
        read integer imin "Minimo : "
        read integer imax "Maximo : "
        if imin % 2 != 0 then
            imin++
        end
        for integer i from imin to imax + 1  step 2
            write i + " "
        end
    end 


//pseudocode  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:03
