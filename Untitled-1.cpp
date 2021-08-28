#include <stdio.h>
#include <stdlib.h>

float MF, p1, p2, m1, m2, MEX1, MEX2;

main()

{
    printf("digite o valor de P1\n");
    scanf("%f", &p1);
    printf("digite o valor de P2\n");
    scanf("%f", &p2);
    printf("digite o valor de MEX1\n");
    scanf("%f", &MEX1);
    printf("digite o valor de MEX2\n");
    scanf("%f", &MEX2);
    m1=(p1*0,90)+(MEX1*0,10);
    m2=(p2*0,90)+(MEX2*0,10);
    MF=m1+(2*m2)/3;
    printf("A media e: %f",MF);
}