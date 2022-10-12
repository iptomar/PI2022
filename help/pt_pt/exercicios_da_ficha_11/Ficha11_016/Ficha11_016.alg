// Programador           -

    inicio 
        ler inteiro alt "Altura   : "
        ler texto char "Caractér : "
        copa(alt , char)
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


//pseudocode  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:15
