#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a=0, b=0, c=0;
    printf("a= %d\n",a);
    printf("entrez une nvelle valeur 'int' de a:\t");
    scanf("%d", &a);
    printf("entrez une nvelle valeur 'int' de b:\t");
    scanf("%d", &b);
    c=a+b;
    printf("c=a+b = %d\n",c);
    c=a%b;
    printf("c=a modulo b = %d\n",c);
    getchar();
return 0;
}
