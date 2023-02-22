#include <stdio.h>
#include "parfait.h"


void testeParf() {
int n;
printf("Saisir entier\n");
if (scanf("%d",&n)!=1) printf("Erreur de saisie\n");
else if (parfait(n)) printf("%d est parfait.\n",n);
else printf("%d n'est pas parfait.\n",n);}

void testeNbParfInter() {
    int a,b;
    printf("\nTeste Nombre Parfait Intervalle\n");
    printf("\t Saisissez un intervalle (deux entiers a b) => ");
    if (scanf("%d%d",&a,&b)!=2)printf("Erreur de saisie\n");
    else printf("Il y a %d parfaits dans l'intervalle[%d,%d]\n",parfaitintervalle(a,b),a,b);}

void 



int main(){

testeParf();
testeNbParfInter();
system("pause");

}