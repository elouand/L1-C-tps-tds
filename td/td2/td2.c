#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() { 


float x;
do {printf("Donner un reel positif \n");
scanf("%f",&x);
if(x>0) printf("la racine carree est %f",sqrt(x));
else printf("la valeur est incorrecte");
    
} while (x!=0);

return EXIT_SUCCESS;
}
