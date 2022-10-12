// Programador           -

    inicio 
        ler inteiro altura "Altura : "
        ler texto c "Caractér : "
        trianguloC(altura , c)
    fim 

    funcao vazio linhaC(inteiro n ,  texto c)
        iterar inteiro i de 0 até n  passo 1
            escrever c
        fim
        escrever "\n"
    fim 

    funcao vazio trianguloC(inteiro altura ,  texto c)
        iterar inteiro i de 0 até altura  passo 1
            linhaC(altura - i , c)
        fim
    fim 


//pseudocode  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:13
