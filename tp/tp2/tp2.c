#include <stdio.h>
#include <math.h>

int main() 
{



int n;
float x;
printf("Entrez un entier\n");
scanf("%d",&n);

for (float i=1;i<(n+1);i++){ x += 1/i;};
printf("%f\n",x);

for (float i=n;i>1;i--){ x += 1/i;printf("%f",i);};

printf("%f",x);


system("pause");





}