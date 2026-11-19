algoritmo "crescimento_populacional"
// Disciplina   : [Linguagem e Lógica de Programação]
// Descrição    : Calcula quantos anos a cidade A (90.000 hab., 3% ao ano)
//                leva para igualar ou ultrapassar a cidade B
//                (200.000 hab., 1,5% ao ano)
// Autor(a)     : Nome do(a) aluno(a)
// Data atual   : 19/11/2026

var
   pop_a, pop_b: real
   anos: inteiro

inicio
   pop_a <- 90000
   pop_b <- 200000
   anos <- 0

   enquanto pop_a < pop_b faca
      pop_a <- pop_a * 1.03
      pop_b <- pop_b * 1.015
      anos <- anos + 1
   fimenquanto

   escreval("Anos necessários: ", anos)
fimalgoritmo
