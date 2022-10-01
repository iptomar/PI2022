// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

    begin 
        read integer n "Number of terms : "
        real product = 1
        for integer i from 1 to n + 1  step 1
            real f = pow(i , 1.0 / 3)
            product *= f
        end
        write "Result = " + product
    end 


//pseudocode  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 22:37
