#include "parfait.h" 
#include <stdbool.h>
#include <stdio.h>
 


_Bool parfait(int a) {/*Cette fonction prend un entier en entrée et teste si cet entier est un nombre parfait, c'est-à-dire si la somme des diviseurs de cet entier est égale à deux fois l'entier.*/
int sommediviseurs = 0;
for (int i = 1;i<=((a/2))+1;i++){
    if (a%i==0) {
        sommediviseurs += i;
    }
}
sommediviseurs += a;
if (sommediviseurs == (2*a)) {return true;}
else {return false;}
}




int parfaitintervalle(int x,int y) {/*Cette fonction calcule le nombre d'entiers parfaits présents dans l'intervalle x-y. Il prend deux entiers délimitant l'intervalle en entrée et retourne un troisième entier, le nombre de parfaits dans l'intervalle.*/
int nbentiers = 0;
for (int i=x;i<=y;i++) {if (parfait(i)==true) {nbentiers+=1;}}
return nbentiers;}


int niemeParfait(int n){int cpt = 0;
int i = 1;
while(cpt<n) {
    if(parfait(i)) cpt++;
    i++;}

return i-1;}

_Bool premierparfaitintervalle(int x,int y,int*sortie) {



}


