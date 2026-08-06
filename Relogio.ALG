Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 06/08/2026
Var
s1, h, m, s: inteiro


Inicio
escreva("Qual o tempo em segundos?")
leia(s1)

h <- (s1\3600)
m <- (s1%3600)\60
s <- (s1%3600)%60

escreva(h, m, s)

Fimalgoritmo
