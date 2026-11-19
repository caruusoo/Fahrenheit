algoritmo "pa_n_termos"
// Disciplina   : [Linguagem e Lógica de Programação]
// Descrição    : Calcula e escreve os n primeiros termos de uma P.A.
//                de elemento inicial i e razão r
// Autor(a)     : Nome do(a) aluno(a)
// Data atual   : 19/11/2026

var
   n, k: inteiro
   i, r, termo: real

inicio
   escreva("Digite o primeiro termo (i): ")
   leia(i)
   escreva("Digite a razão (r): ")
   leia(r)
   escreva("Digite a quantidade de termos (n): ")
   leia(n)

   termo <- i
   para k de 1 ate n faca
      escreva(termo)
      se k < n entao
         escreva(", ")
      fimse
      termo <- termo + r
   fimpara
   escreval("")
fimalgoritmo
