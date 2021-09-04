//EXERCICIO 3 DA LISTA 2

#include <stdio.h>
#include <stdlib.h>

float valor1, valor2, soma, maior;

main()
{
printf("digite o valor1 \n");
scanf("%f", &valor1);
printf("digite o valor2 \n");
scanf("%f", &valor2);

soma = valor1+valor2; //FAZ AS SOMAS DOS VALORES

printf("A Soma e: %f\t", soma);

if(soma>30){ //DEFINE O MAIOR NUMERO
    if(valor1>valor2)
    maior = valor1;
    else
    maior = valor2;

    printf("SOMA: %f\t: MAIOR: %f\t", soma, maior);
}

else{
    if(valor2>valor1)
    maior = valor2;
    else
    maior = valor1;

    printf("SOMA: %f\t: MAIOR: %f\t", soma, maior);
}

}