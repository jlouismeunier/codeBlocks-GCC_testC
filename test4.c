#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double a=0, b=0, c=0;
    printf("entrez une nvelle valeur 'radian' de a:\t");
    scanf("%f", &a);
    c=sin(a);
    printf("c=sin(a) = %f\n",c);
    c=0;
    printf("entrez une nvelle valeur de b:\t");
    scanf("%f", &b);
    c=log(b);
    printf("c=log10(b) = %f\n",c);
    return 0;
}
