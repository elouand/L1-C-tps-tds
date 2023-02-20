#include <stdio.h>
#include <math.h>
#include <stdbool.h>



int centaine(int n) {

    if (n<1000) {
    int centi = n/100; 
    return centi;
    }
    else {printf("Valeur incorrecte\n");}}

int dizaine(int n) {

    if (n<1000) {
    int dixi = (n/10)-((n/100)*10); 
    return dixi;
    }}

int unit(int n) {

    if (n<1000) {
    int uni = n%10; 
    return uni;
    
    }
}

_Bool testeprop(int n){

    if (n==
        (pow(centaine(n),3))
        +(pow(dizaine(n),3))
        +(pow(unit(n),3))
        ) 
            {return true;}

    else {return false;}}


int testetous() {

    for (int i=2;i<1000;i++) {

        if (testeprop(i)==true) {printf("%d respecte la propriete des chiffres cubes\n",i);}
    }

}

_Bool testetriplet(int c,int d,int u) {

int number = 100*c+10*d+u;
return testeprop(number);



for (int c=0;c<10;c++) {
    for (int d = 0;d<10;d++) {
        for (int u=0;u<10;u++) {
            if (testetriplet(c,d,u)==true) {printf("Le triplet %d,%d,%d satisfait la propriété des chiffres cubes",c,d,u);}
            


        }

    }


}

}




int main(){
/*
\*int n;
printf("Entrez un entier plus petit que 1000\n");
scanf("%d",&n);

if (n<1000 && -1<n) {

 


_Bool prop = testeprop(n);
int centi=centaine(n);
int dixi = dizaine(n);
int uni = unit(n);
printf("Centaines: %d, dizaines: %d, unites: %d \n", centi,dixi,uni);

if (prop==true) {printf("Ce nombre verifie la propriete des chiffres cubes.\n");}

}

else {printf("Nombre non valide");}

testetous();



int c;
int d;
int u;
printf("Entrez trois chiffres\n");

scanf("%d %d %d",&c,&d,&u);

if (testetriplet(c,d,u)==true) {printf("Ce triplet forme un nombre respectant la propriete.\n");}
else {printf("Ce triplet ne forme pas un nombre respectant la propriete");}
*/

testetous();
system("pause");




}