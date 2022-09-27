// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

    begin 
        read real r1 "Número real \t: "
        read real r2 "Número real \t: "
        read real r3 "Soma real \t: "
        real soma = r1 + r2
        real distancia = abs(soma - r3)
        real precisao = 1.0E-5
        write r1 + " + " + r2 + " \t= " + r3 + " => "
        if distancia < precisao then
            write "Verdadeiro"
        else
            write "Falso"
        end
        write "\n\n" + r1 + " + " + r2 + " \t= " + (r1 + r2)
        write "\nDistância \t: " + distancia
        write "\nPrecisão \t: " + precisao
    end 


//pseudocode  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:32
