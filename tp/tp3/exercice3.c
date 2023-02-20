#include <stdio.h>
#include <stdbool.h>
int main(){ 
int année;
int mois;
int jour;



_Bool Bissextile(int année) {
if ((année%4)==0) { return true;printf("L'année est bissextile\n")}
else {return false};}

printf("Entrez une date");
scanf("%d/%d/%d",&année,&mois,&jour)

}