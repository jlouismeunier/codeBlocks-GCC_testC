#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a=14, b=7;
    int *p=&a;
    int *p1=&b;
    printf("a= %d\n",a);
    printf("adresse a = %d\n",p);
    printf("contenu de adresse = %d\n",*p);
    printf("b= %d\n",b);
    printf("adresse b = %d\n",p1);
    printf("contenu de adresse = %d\n",*p1);
return 0;
}
