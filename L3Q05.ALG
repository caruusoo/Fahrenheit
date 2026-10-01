Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/09/2026
Var
n, i, sum: inteiro


Inicio
escreva("Escreva um número: ")
leia(n)

i <- 1

enquanto i <= n faca
se n mod i = 0 entao
sum <- sum+i
i <- i+1
senao faca
i <- i+1

fimse

fimenquanto


se sum/2=n entao
escreva(n, " é um número perfeito!")

senao entao
escreva(n, " não é um número perfeito!")

fimse
Fimalgoritmo
