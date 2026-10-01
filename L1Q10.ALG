Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 06/08/2026
Var
t, ct, vt, dz, cc, ds, um: inteiro

Inicio

escreva("Quantia de dinheiro")
leia(t)
ct <- t\50
vt <- (t%50)\20
dz <- ((t%50)%20)\10
cc <- (((t%50)%20)%10)\5
ds <- ((((t%50)%20)%10)%5)\2
um <- ((((t%50)%20)%10)%5)%2

escreva(ct, " notas de 50, ", vt, " notas de 20, ", dz, " notas de 10, ", cc, "notas de cinco")
Fimalgoritmo
