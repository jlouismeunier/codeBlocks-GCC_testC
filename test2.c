#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float a=0, b=0, c=0;
    printf("entrez une nvelle valeur 'float' de a:\t");
    scanf("%f", &a);
    printf("entrez une nvelle valeur 'float' de b:\t");
    scanf("%f", &b);
    c=a+b;
    printf("c=a+b = %f\n",c);
    printf("%f + %f = %f\n",a,b,c); //variante de la ligne précédente
    c=a/b;
    printf("%f / %f = %f\n",a,b,c);
    c=a*b;
    printf("%f * %f = %f\n",a,b,c);
    getch();
return 0;
}
