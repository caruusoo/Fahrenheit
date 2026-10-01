Algoritmo "exercicio2Lista2"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/08/2026
Var
h, gen: inteiro


Inicio
escreva("Sua altura em cm: ")
leia(h)
escreva("Seu genero [1]Homem [2]Mulher: ")
leia(gen)
se gen = 1 entao
   escreva("Seu peso ideal é de", ((72.7*(h/100))-58), "kg!")
fimse
se gen = 2 entao
   escreva("Seu peso ideal é de", ((62.1*(h/100))-44.7), "kg!")
fimse
se (gen<>1) e (gen<>2) entao
   escreva("Gênero inválido!")
fimse

Fimalgoritmo
