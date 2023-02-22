/*exercice 2*/
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






int main(){
int n;
scanf("%d",&n);
if (parfait(n)==true) {
    printf("C'est parfait");
}
else {printf("Ce n'est pas parfait");}


system("pause");


}