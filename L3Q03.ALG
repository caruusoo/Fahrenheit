Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/09/2026
Var
n, i, valor, maior, menor, amp: inteiro

Inicio
escreva("Digite a quantidade de valores: ")
leia(n)

escreva("Digite o 1º valor: ")
leia(valor)

maior <- valor
menor <- valor

para i de 2 ate n faca
escreva("Digite o", i, "º valor: ")
leia(valor)
se valor > maior entao
maior <- valor
fimse

se valor < menor entao
menor <- valor
fimse
fimpara

escreva(maior, " -", menor, " =", maior-menor)

Fimalgoritmo
