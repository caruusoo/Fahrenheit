algoritmo "pesquisa_produto"
// Disciplina   : [Linguagem e Lógica de Programação]
// Descrição    : Lê o sexo e a resposta (sim/não) de N entrevistados e
//                calcula os totais de sim e não e as percentagens pedidas
// Autor(a)     : Nome do(a) aluno(a)
// Data atual   : 19/11/2026

var
   n, i, qtd_sim, qtd_nao, qtd_f, qtd_m, f_sim, m_nao: inteiro
   perc_f_sim, perc_m_nao: real
   sexo, resposta: caractere

inicio
   escreva("Quantas pessoas serão analisadas? ")
   leia(n)

   qtd_sim <- 0
   qtd_nao <- 0
   qtd_f <- 0
   qtd_m <- 0
   f_sim <- 0
   m_nao <- 0

   para i de 1 ate n faca
      escreva("Pessoa ", i, " - sexo (M/F): ")
      leia(sexo)
      escreva("Pessoa ", i, " - gostou do produto? (S/N): ")
      leia(resposta)

      se resposta = "S" entao
         qtd_sim <- qtd_sim + 1
      senao
         qtd_nao <- qtd_nao + 1
      fimse

      se sexo = "F" entao
         qtd_f <- qtd_f + 1
         se resposta = "S" entao
            f_sim <- f_sim + 1
         fimse
      senao
         qtd_m <- qtd_m + 1
         se resposta = "N" entao
            m_nao <- m_nao + 1
         fimse
      fimse
   fimpara

   escreval("Pessoas que responderam sim: ", qtd_sim)
   escreval("Pessoas que responderam não: ", qtd_nao)

   se qtd_f > 0 entao
      perc_f_sim <- f_sim / qtd_f * 100
      escreval("Mulheres que responderam sim: ", perc_f_sim, "%")
   senao
      escreval("Não há mulheres entre os entrevistados.")
   fimse

   se qtd_m > 0 entao
      perc_m_nao <- m_nao / qtd_m * 100
      escreval("Homens que responderam não: ", perc_m_nao, "%")
   senao
      escreval("Não há homens entre os entrevistados.")
   fimse
fimalgoritmo
