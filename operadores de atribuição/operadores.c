/* Operadores de atribuição
--Incremento em 1 unidade: ++
--Decremento em 1 unidade: --
--Incremento genérico: +=
--Decremento genérico: -=
--Atribuição de multiplicação: *=
--Atribuição de divisão: /= */

# include <stdio.h>

int main(){
    
    int dado = 10;

    printf("Dado antes do incremento %d\n",dado);

    dado ++;
    printf("Dado após o incremento %d\n",dado);

    dado --;
    printf("Dado após o drecremento %d\n",dado);

    dado +=3;
    printf("Dado após decremento de 3 unidades %d\n",dado);

    dado -=2;
    printf("Dado após decremnto de 2 unidades %d\n",dado);

    dado *= 10;
    printf("Dado após multiplicação por 10 %d\n",dado);

    
}