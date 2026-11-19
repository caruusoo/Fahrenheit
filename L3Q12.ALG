algoritmo "crescimento_populacional_entrada"
// Disciplina   : [Linguagem e Lógica de Programação]
// Descrição    : Igual ao exercício anterior, mas o usuário informa as
//                populações e as taxas; a entrada só é aceita se as
//                populações forem convergir (A menor que B e taxa de A
//                maior que a de B)
// Autor(a)     : Nome do(a) aluno(a)
// Data atual   : 19/11/2026

var
   pop_a, pop_b, taxa_a, taxa_b: real
   anos: inteiro
   valido: logico

inicio
   repita
      escreva("População da cidade A: ")
      leia(pop_a)
      escreva("Taxa anual de crescimento de A (%): ")
      leia(taxa_a)
      escreva("População da cidade B: ")
      leia(pop_b)
      escreva("Taxa anual de crescimento de B (%): ")
      leia(taxa_b)

      valido <- (pop_a > 0) e (pop_b > pop_a) e (taxa_b >= 0) e (taxa_a > taxa_b)

      se nao valido entao
         escreval("Entrada inválida: A deve ser menor que B e a taxa de A")
         escreval("deve ser maior que a de B. Digite novamente.")
      fimse
   ate valido

   anos <- 0
   enquanto pop_a < pop_b faca
      pop_a <- pop_a * (1 + taxa_a / 100)
      pop_b <- pop_b * (1 + taxa_b / 100)
      anos <- anos + 1
   fimenquanto

   escreval("Anos necessários: ", anos)
fimalgoritmo
