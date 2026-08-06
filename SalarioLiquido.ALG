Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 06/08/2026
Var
sal: real

Inicio
escreva("Salário bruto mensal: ")
leia(sal)
escreval("Salário bruto: R$ ", sal)
escreval("(-)IR (15%): R$ ", (sal*(15/100)))
escreval("(-)INSS (11%): R$ ", (sal*(11/100)))
escreval("(-)Sindicato (3%): R$ ", (sal*(3/100)))
escreva("Salário liquido: R$ ", sal-(sal*(29/100)))


Fimalgoritmo