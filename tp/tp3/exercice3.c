#include <stdio.h>
#include <stdbool.h>

_Bool bissextile(int annee){    
    if ((annee%100)==0){
        if ((annee%400)==0) {
            if ((annee%4)==0) { return true;}
            else {return false;}}
            }

    
    else {if (annee%4==0) {return true;}
        else {return false;}}}




_Bool datevalide(int jour,int mois,int annee) {

    if (1582<annee) {
        switch (mois) {

        case 1:
        if (jour<31){return true;} 
        else{return false;}
        break;
        case 2:
        if (bissextile(annee)==true) { if (jour<29){return true;} else {return false;}}
        else {if (jour<28) {return true;} else {return false;};}
        break;
        case 3:
        if (jour<31){return true;} 
        else{return false;}
        break;
        case 5:
        if (jour<31){return true;} 
        else{return false;}
        break;
        case 7:
        if (jour<31){return true;} 
        else{return false;}
        break;
        case 9:
        if (jour<31){return true;} 
        else{return false;}
        break;
        case 11:
        if (jour<31){return true;} 
        else{return false;}
        break;
        default: 
        if (mois<13) {
        if (jour<32){return true;} 
        else{return false;}
        }
        else {return false;};
    }}

    else {return false;}}


int comptejours(jour,mois,annee){

if (datevalide(jour,mois,annee)==true){

int comptejours = annee*365;
comptejours += annee/4;

switch (mois) { /* edit: il est plus rapide de faire un switch(mois%2) et de prendre les deux cas (avec une exception pour février).*/

case 2:
comptejours+=30; /* 30 jours de janvier*/
break;
case 3:
comptejours+= 58;/* +28 de février
 On ne fait pas de case pour les bissextiles car les jours de ces années sont déjà ajoutés au-dessus, ligne 67*/

break;
case 4:
comptejours += 88; /* + les 30 jours de mars*/
break;

case 5:
comptejours += 119; /* + les 31 jours d'avril*/
break;
case 6:
comptejours += 149; /*+les 30 jours de Mai*/
break;

case 7:
comptejours += 180; /*+ les 31 jours de juin*/
break;

case 8:
comptejours += 210;/*+ les 30 jours de juillet*/
break;
case 9: 
comptejours += 241;/* + les 31 jours d'août*/
case 10:
comptejours += 271; /*+ les 30 jours de septembre*/
break;
case 11:
comptejours += 302; /*+ les 31 jours d'octobre*/
break;
case 12:
comptejours += 332; /* + les 30 jours de novembre*/
break;
}
}
}

else{printf("La date entree est incorrecte.\n");}


int main(){ 
int annee;
int mois;
int jour;


printf("Entrez un jour, un mois et une annee \n");
scanf("%d",&jour);
scanf("%d",&mois);
scanf("%d",&annee);
printf("\n");
if (datevalide(jour,mois,annee)==true) {printf("c'est bon");} else {printf("Pas bon");}

system("pause");

}