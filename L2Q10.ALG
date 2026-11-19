algoritmo "raizes_eq_2grau"
// Disciplina   : [Linguagem e Lógica de Programação]
// Descrição    : Calcula as raízes de uma equação de 2º grau ax² + bx + c = 0
// Autor(a)     : Nome do(a) aluno(a)
// Data atual   : 19/11/2026

var
   a, b, c, delta, x1, x2: real

inicio
   escreva("Digite o coeficiente a: ")
   leia(a)
   escreva("Digite o coeficiente b: ")
   leia(b)
   escreva("Digite o coeficiente c: ")
   leia(c)

   se a = 0 entao
      escreval("A equação não é de 2º grau (a = 0).")
   senao
      delta <- b^2 - 4*a*c
      escreval("Delta = ", delta)

      se delta >= 0 entao
         x1 <- (-b + raizq(delta)) / (2*a)
         x2 <- (-b - raizq(delta)) / (2*a)
         escreval("x1 = ", x1)
         escreval("x2 = ", x2)
      senao
         escreval("A equação não possui raízes reais.")
      fimse
   fimse
fimalgoritmo
