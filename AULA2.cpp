#include <stdio.h>
#include <stdlib.h>

float med,
v1,
v2;

int main()

{
    printf("digite o valor de v1 \n");
    scanf("%f", &v1);
     printf("digite o valor de v2 \n");
    scanf("%f", &v2);
    med = (v1+v2)/2;
    printf("A media e: %f", med);
}