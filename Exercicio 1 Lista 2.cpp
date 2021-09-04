//EXERCICIO 1 DA LISTA 2

#include <stdio.h>
#include <stdlib.h>

float valor;

main()
{
printf("digite o valor \n");
scanf("%f", &valor);

if (valor >=50 && valor <=150)
{
    printf("o valor esta entre 50 e 150");
}
else
{
    printf("o valor NAO ESTA entre 50 e 150");
}
}