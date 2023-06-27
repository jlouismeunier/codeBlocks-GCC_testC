#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float a=0, b=0, c=0;
    printf("entrez une nvelle valeur 'float' de a:\t");
    scanf("%f", &a);
    printf("entrez une nvelle valeur 'float' de b:\t");
    scanf("%f", &b);
    c=fabs(a);
    printf("c=valeur absolue de a = %f\n",c);
    c=ceil(b);
    printf("c=valeur 'int' juste superieure de b = %f\n",c);
    c=floor(b);
    printf("c=valeur 'int' juste inferieure de b = %f\n",c);
    c=pow(a,b);
    printf("c= a puissance b = %f\n",c);
    c=sqrt(a);
    printf("c= racine carree de a = %f\n",c);
    getch();
return 0;
}
