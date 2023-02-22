#ifndef PARFAIT_H
#define PARFAIT_H

_Bool parfait(int a); /* Prend un entier en entrée et retourne "true" si c'est un nombre parfait, "false" sinon*/
int parfaitintervalle(int x,int y); /* Donne le nombre de parfaits présents dans l'intervalle [x;y]*/
int niemeParfait(int n); /* Donne le combientième parfait est celui qui est sélectionné*/
_Bool premierparfaitintervalle(int x,int y,int*sortie);
#endif