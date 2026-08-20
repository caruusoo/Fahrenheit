Algoritmo "exercicio4Lista2"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/08/2026
Var
n1, n2, n3, n4, ex, m: real

Inicio
escreva("Primeira nota do aluno: ")
leia(n1)
escreva("Segunda nota do aluno: ")
leia(n2)
escreva("Terceira nota do aluno: ")
leia(n3)
escreva("Quarta nota do aluno: ")
leia(n4)
m <- ((n1+n2+n3+n4)/4)
se m>=7 entao
   escreva("O aluno passou, média:", m)
   senao
   escreva("Nota do exame: ")
   leia(ex)
   se ((m+ex)/2)>=5 entao
      escreva("O aluno passou, média final:", (m+ex)/2)
   senao
        escreva("O aluno reprovou, média final:", (m+ex)/2)
   fimse
fimse
Fimalgoritmo