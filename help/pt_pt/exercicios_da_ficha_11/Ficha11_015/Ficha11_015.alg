// Programador           -

    inicio 
        ler inteiro altura "Altura   : "
        ler inteiro largura "Largura  : "
        ler texto limite "Limite   : "
        ler texto interior "Interior : "
        caixa(largura , altura , limite , interior)
    fim 

    funcao vazio linha(inteiro n ,  texto c)
        iterar inteiro i de 0 até n  passo 1
            escrever c
        fim
        escrever "\n"
    fim 

    funcao vazio interior(inteiro n ,  texto cl ,  texto ci)
        escrever cl
        iterar inteiro i de 1 até n - 1  passo 1
            escrever ci
        fim
        escrever cl + "\n"
    fim 

    funcao vazio caixa(inteiro larg ,  inteiro alt ,  texto cl ,  texto ci)
        linha(larg , cl)
        iterar inteiro i de 1 até alt - 1  passo 1
            interior(larg , cl , ci)
        fim
        linha(larg , cl)
    fim 


//pseudocode  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:14
