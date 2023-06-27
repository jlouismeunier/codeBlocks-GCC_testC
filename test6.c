#include <stdio.h>
#include <stdlib.h>

double conversion(double euros)
{
    double fb=0;
    fb=40.3399*euros;
    return fb;
}

int main(int argc, char *argv[])
{
    float euro;
    printf("entrez une somme en euros :\t");
    scanf("%f", &euro);
    printf("%f euros = %f fb\n", euro, conversion(euro));
    _getch();

    return 0;
}
