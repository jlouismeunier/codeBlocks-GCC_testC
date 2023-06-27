#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int age=0,b=0;
    printf("entrez votre age :\t");
    scanf("%d", &age);
    if (age >=60)
    { printf("vous etes senior \n"); }
    else if (age >=18)
    { printf("vous etes majeur \n"); }
    else
    { printf("vous etes mineur \n"); }

    printf("entrez votre age :\t");
    scanf("%d", &age);
    if (age >=18 && age <60)
    { printf("vous etes majeur \n"); }
    else if (age >=60)
    { printf("vous etes senior \n"); }
    else
    { printf("vous etes mineur \n"); }
    return 0;
}
