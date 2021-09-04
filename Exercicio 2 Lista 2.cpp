//EXERCICIO 2 DA LISTA 2
//Elaborar um programa que lê três valores. Ele deve apresentar a soma desses valores e indicar qual é o maior valor entre eles. 

#include <stdio.h>
#include <stdlib.h>

//********************DECLARAÇÃO DE VARIÁVEIS**************************************
float valor1,
valor2,
valor3,
soma,
maior;

main()
{
    //*****************ENTRADA DE DADOS********************************************
printf("digite o valor1 \n"); 
scanf("%f", &valor1); //LEIA VALOR1
printf("digite o valor2 \n"); 
scanf("%f", &valor2); //LEIA VALOR2
printf("digite o valor3 \n"); 
scanf("%f", &valor3); //LEIA VALOR3

//*****************CALCULO DA SOMA DOS VALORES DE ENTRADA**************************
soma = valor1+valor2+valor3; //SOMA OS VALORES 

//****************CONDICIONAIS PARA ENCONTRAR O MAIOR VALOR************************
if(valor1>valor2){ 
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

printf("SOMA: %f\t: MAIOR: %f\t", soma, maior); //IMPRIME A SOMA E O MAIOR VALOR

}
