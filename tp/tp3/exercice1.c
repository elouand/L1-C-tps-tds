#include <stdio.h>
#include <stdbool.h>

int main() {

float saisieNote() {

    float note;
    _Bool correct = false;
    printf("Entrez une note\n");
    scanf("%f",&note);


    if (-1<note && note<21) {return note;}
    else { printf("Valeur incorrect\n";return -1;}
}


float moyenne(float n) {
    float moyenne;

    for(i=0;i<n;i++){
        float note= -1;
        while(note==-1) {note=saisieNote();}
        moyenne += note;
    }
    
    moyenne = moyenne/n;
    return moyenne;
}

float m;
int(n);

printf("Entrez le nombre de notes à saisir pour la moyenne\n");
scanf("%d",&n);

moyenne = moyenne(n);













 system("pause");

}