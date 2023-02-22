#include <stdbool.h>
#include <stdio.h>

/* Exercice 1*/

_Bool saisieValIntervalle(int a,int b, int*c) {
int d;
printf("Saisir un entier entre %d et %d\n",a,b);

scanf("%d",&d);

if (d<=b && a<=d){
*c = d;
return true;}

else {return false;} 
}


int main() {

int a = 0;
int b = 20;


int note1;
int note2;
int note3;
int* x = &note1;
int* y = &note2;
int* z = &note3;

printf("Entrez trois notes\n");

while (saisieValIntervalle(0,20,x)==false) {
    saisieValIntervalle(0,20,x);

}

while (saisieValIntervalle(0,20,y)==false) {
    saisieValIntervalle(0,20,y);

}

while (saisieValIntervalle(0,20,z)==false) {
    printf("valeur incorrecte");
    saisieValIntervalle(0,20,z);

}

int moyenne = (note1+note2+note3)/3;
printf("%d",moyenne);




system("pause");
}
















