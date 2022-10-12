// Programador           -

    inicio 
        ler inteiro altura "Altura  : "
        ler inteiro largura "Largura : "
        caixa(largura , altura)
    fim 

    funcao vazio linha(inteiro n)
        iterar inteiro i de 0 até n  passo 1
            escrever "*"
        fim
        escrever "\n"
    fim 

    funcao vazio interior(inteiro n)
        escrever "*"
        iterar inteiro i de 1 até n - 1  passo 1
            escrever " "
        fim
        escrever "*\n"
    fim 

    funcao vazio caixa(inteiro larg ,  inteiro alt)
        linha(larg)
        iterar inteiro i de 1 até alt - 1  passo 1
            interior(larg)
        fim
        linha(larg)
    fim 


//pseudocode  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:13
