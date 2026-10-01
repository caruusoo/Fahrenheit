Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 06/08/2026
Var
b, n, v, t: real

Inicio
escreva("Numero de votos em branco: ")
leia(b)
escreva("Número de votos nulo: ")
leia(n)
escreva("Número de votos válidos: ")
leia(v)
t <- b+n+v
escreval("Votos Válidos: ", (v*100)/t)
escreval("Votos nulos: ", (n*100)/t)
escreva("Votos em branco: ", (b*100)/t)

Fimalgoritmo
