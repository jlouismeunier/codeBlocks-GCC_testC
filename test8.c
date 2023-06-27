#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a=0;
    for(a=0;a<50;a++)
    {
    int *p=&a;
    printf("a= %d\n",a);
    printf("adresse a = %d\n",p);
    printf("contenu de adresse = %d\n",*p);
    }
return 0;
}
