algoritmo "altura_por_sexo"
// Disciplina   : [Linguagem e Lógica de Programação]
// Descrição    : Lê altura e sexo de N pessoas; calcula a maior altura entre
//                os homens e a média de altura das mulheres
// Autor(a)     : Nome do(a) aluno(a)
// Data atual   : 19/11/2026

var
   n, i, qtd_homens, qtd_mulheres: inteiro
   altura, maior_h, soma_m, media_m: real
   sexo: caractere

inicio
   escreva("Quantas pessoas? ")
   leia(n)

   qtd_homens <- 0
   qtd_mulheres <- 0
   maior_h <- 0
   soma_m <- 0

   para i de 1 ate n faca
      escreva("Pessoa ", i, " - altura: ")
      leia(altura)
      escreva("Pessoa ", i, " - sexo (M/F): ")
      leia(sexo)

      se sexo = "M" entao
         qtd_homens <- qtd_homens + 1
         se altura > maior_h entao
            maior_h <- altura
         fimse
      senao
         qtd_mulheres <- qtd_mulheres + 1
         soma_m <- soma_m + altura
      fimse
   fimpara

   se qtd_homens > 0 entao
      escreval("Maior altura entre os homens: ", maior_h)
   senao
      escreval("Não há homens no conjunto.")
   fimse

   se qtd_mulheres > 0 entao
      media_m <- soma_m / qtd_mulheres
      escreval("Média de altura das mulheres: ", media_m)
   senao
      escreval("Não há mulheres no conjunto.")
   fimse
fimalgoritmo
