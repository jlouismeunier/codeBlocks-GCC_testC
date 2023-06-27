#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int a = 456;
char str1[5];
itoa(a, str1, 10);  // integer to ascii in decimal (10)
printf("  %s\n",str1);
puts(str1);
itoa(a, str1, 2);   // integer to ascii in binary (2)
printf("  %s\n",str1);
puts(str1);

int b;
char str2[5] = "124";
b=atoi(str2);   // ascii to integer
printf("  %d\n",b);

char str3[6] = "3.14";
float pi = atof(str3);  // integer to float
printf("pi = %f\n", pi);

return 0;
}
