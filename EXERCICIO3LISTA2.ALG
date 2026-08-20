Algoritmo "exercicio3Lista2"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/08/2026
Var
x, y: real


Inicio
escreva("Coordenada x do ponto: ")
leia(x)
escreva("Coordenada y do ponto: ")
leia(y)
se x>0 entao
   se y>0 entao
      escreva("Q1")
   senao
        se y<0 entao
           escreva("Q4")
        senao
             escreva("Eixo X")
        fimse
   fimse
fimse
se x<0 entao
   se y>0 entao
      escreva("Q2")
   senao
        se y<0 entao
           escreva("Q3")
        senao
             escreva("Eixo x")
        fimse
   fimse
fimse
se x=0 entao
   se y<>0 entao
     escreva("Eixo y")
     senao
          escreva("Origem")
   fimse
fimse
Fimalgoritmo