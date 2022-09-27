// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

    begin 
        read integer n "Número de termos : "
        real produto = 1
        for integer i from 1 to n + 1  step 1
            real f = pow(i , 1.0 / 3)
            produto *= f
        end
        write "Resultado = " + produto
    end 


//pseudocode  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:13
