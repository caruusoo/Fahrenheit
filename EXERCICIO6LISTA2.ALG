Algoritmo "EXERCICIO6LISTA2"

Var
n1, n2, op: real


Inicio
escreval("Digite 2 números: ")
leia(n1)
leia(n2)
escreval("[1]-Adição | [2]-Subtração | [3]-Multiplicação | [4]-Divisão")
leia(op)
se (op=1) entao
   escreva(n1, " +", n2, " =", n1+n2)
   senao
        se (op=2) entao
           escreva(n1, " -", n2, " =", n1-n2)
           senao
                se (op=3) entao
                   escreva(n1, " *", n2, " =", n1*n2)
                   senao
                          se (op=4) entao
                             escreva(n1, " /", n2, " =", n1/n2)
           fimse

        fimse
   fimse
fimse
Fimalgoritmo