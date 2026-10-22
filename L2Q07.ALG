Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 22/10/2026
Var
n1, n2, d: inteiro

Inicio
escreva("Digite o primeiro valor: ")
leia(n1)
escreva("Digite o segundo valor: ")
leia(n2)
d <- n1 mod n2

se d = 1 entao
escreva(n1+n2+d)

senao
se d = 2 entao
se n1 mod 2 = 0 entao
escreva(n1, " é par.")
senao
escreva(n1, " é impar.")
fimse
se n2 mod 2 = 0 entao
escreva(n2, " é par.")
senao
escreva(n2, " é impar.")
fimse

senao
se d = 3 entao
escreva((n1+n2)*n1)

senao
se d = 4 entao
escreva((n1+n2)/n2)

senao
escreva(n1*n1, ", ", n2*n2)
fimse
fimse
fimse
fimse




Fimalgoritmo