Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 01/10/2026
Var
n: inteiro
i: inteiro
v: inteiro
sum: inteiro
fsum: real

Inicio
i <- 1
escreva("Escreva quantos números estão na sequência: ")
leia(n)
enquanto i<=n faca
escreva(i,"º valor: ")
leia(v)
sum <- sum + v
fsum <- fsum + (1/v)
i <- i+1
fimenquanto
escreval("")
escreval("Média aritimética: ", sum/n)
escreval("Média harmônica: ", n/fsum)
Fimalgoritmo