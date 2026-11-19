algoritmo "soma_sequencias"
// Disciplina   : [Linguagem e Lógica de Programação]
// Descrição    : Calcula a soma dos N primeiros termos das sequências
//                (1/2, 3/5, 5/8, ...) e (1, -1/2, 1/3, -1/4, ...)
// Autor(a)     : Nome do(a) aluno(a)
// Data atual   : 19/11/2026

var
   n, k: inteiro
   soma1, soma2, sinal: real

inicio
   escreva("Digite a quantidade de termos N: ")
   leia(n)

   soma1 <- 0
   soma2 <- 0
   sinal <- 1

   para k de 1 ate n faca
      // termo k da 1ª sequência: (2k - 1) / (3k - 1)
      soma1 <- soma1 + (2*k - 1) / (3*k - 1)

      // termo k da 2ª sequência: alterna o sinal, 1/k
      soma2 <- soma2 + sinal / k
      sinal <- -sinal
   fimpara

   escreval("Soma de (1/2, 3/5, 5/8, ...): ", soma1)
   escreval("Soma de (1, -1/2, 1/3, -1/4, ...): ", soma2)
fimalgoritmo
