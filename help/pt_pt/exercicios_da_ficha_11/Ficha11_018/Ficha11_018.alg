// Programador           -

    inicio 
        inteiro alt
        enquanto verdadeiro faz
            ler alt "Altura   : "
            se alt % 2 == 0 && alt >= 4 então
                quebrar
            fim
            escrever "\tValor errado\n"
        fim
        ler texto txt "Caractér : "
        copa(alt / 2 , txt)
        tronco(alt / 2 , txt)
    fim 

    funcao vazio linhaCopa(inteiro sp ,  inteiro chars ,  texto txt)
        iterar inteiro i de 0 até sp  passo 1
            escrever " "
        fim
        iterar inteiro i de 0 até chars  passo 1
            escrever txt
        fim
        escrever "\n"
    fim 

    funcao vazio copa(inteiro alt ,  texto txt)
        iterar inteiro i de 1 até alt + 1  passo 1
            inteiro sp = alt - i
            inteiro chrs1 = i * 2 - 1
            linhaCopa(sp , chrs1 , txt)
        fim
    fim 

    funcao vazio tronco(inteiro n ,  texto ch)
        iterar inteiro i de 0 até n  passo 1
            iterar inteiro j de 0 até n - 1  passo 1
                escrever " "
            fim
            escrever ch + "\n"
        fim
    fim 


//pseudocode  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:17
