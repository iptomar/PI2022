// Programador          Ant0ni0 M@ns0 - Ant0ni0 M@ns0

    inicio 
        ler real r1 "Actual number \t: "
        ler real r2 "Actual number \t: "
        ler real r3 "Actual Sum \t: "
        real sum = r1 + r2
        real distance = abs(sum - r3)
        real precision = 1.0E-5
        escrever r1 + " + " + r2 + " \t= " + r3 + " => "
        se distance < precision então
            escrever "True"
        senão
            escrever "False"
        fim
        escrever "\n\n" + r1 + " + " + r2 + " \t= " + (r1 + r2)
        escrever "\nDistance \t: " + distance
        escrever "\nPrecision \t: " + precision
    fim 


//pseudocode  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	domingo, 2022 set 18 23:28
