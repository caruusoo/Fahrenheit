algoritmo "transcricao_codigo"

var
   x, y, count, res: inteiro

inicio

   count <- 1
   res <- 0

   escreva("Escreva um valor x e um valor y: ")
   leia(x, y)

   se (x > 0) entao
      enquanto (count < x) faca
         escreva(count, " + ")
         res <- res + count
         count <- count + 2
      fimenquanto

   senao
      se (x < 0) entao
         enquanto (-count > x) faca
            escreva("(", -count, ") + ")
            res <- res - count
            count <- count + 2
         fimenquanto

      senao
         escreva("0 + ")
      fimse
   fimse

   count <- 1

   se (y > 0) entao
      enquanto (count < y - 2) faca
         escreva(count, " + ")
         res <- res + count
         count <- count + 2
      fimenquanto

      escreva(count, " = ", res + count)

   senao
      se (y < 0) entao
         enquanto (-count > y + 2) faca
            escreva("(-", count, ") + ")
            res <- res - count
            count <- count + 2
         fimenquanto

         escreva("(-", count, ") = ", res - count)

      senao
         escreva("0 = ", res)
      fimse
   fimse

fimalgoritmo
