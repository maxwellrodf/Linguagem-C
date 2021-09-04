//EXERCICIO 2 DA LISTA 2

#include <stdio.h>
#include <stdlib.h>

float valor1,
valor2,
valor3,
soma,
maior;

main()
{
printf("digite o valor1 \n"); 
scanf("%f", &valor1); //LEIA VALOR1
printf("digite o valor2 \n"); 
scanf("%f", &valor2); //LEIA VALOR2
printf("digite o valor3 \n"); 
scanf("%f", &valor3); //LEIA VALOR3

soma = valor1+valor2+valor3; //SOMA OS VALORES 

if(valor1>valor2){ //ENCONTRA O MAIOR VALOR
if(valor1>valor3)
maior = valor1;
else
maior = valor3;
}

else{
if(valor2>valor3)
maior = valor2;
else
maior = valor3;
}

printf("SOMA: %f\t: MAIOR: %f\t", soma, maior);

}
