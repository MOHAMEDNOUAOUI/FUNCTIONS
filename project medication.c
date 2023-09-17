#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int choix,x;
char medicaments[100][100];
int medicaments_quantite[100];
int medic=0;

void MENU () {
  printf("1 - gestion de medicament \n");
  printf("2 - gestion de /            / \n");
  printf("3 - gestion de /            / \n");
  printf("4 - EXIT program\n");
  printf("choisi une menu : ");
    do{
    scanf("%d",&choix);
    }while(choix>4);

  sousmenu(choix);
}

void sousmenu (){
  switch (choix){
    case 1: {
        printf("---------------------------------------\n");
      printf("1 - add a medicament \n");
      printf("2 - show medicaments \n");
      printf("3 - supprimer medicament \n");
      printf("4 - retour to menu principal\n");
      printf("choisi une menu : ");
        do{
        scanf("%d",&x);
        }while(x>4);
      geremedicament(x);
    }
  }
}

void geremedicament(){
if(x==1){
        int medsquant;
        printf("---------------------------------------\n");
        /*adding medics*/
        printf("how many medication you will enter : ");
        scanf("%d",&medsquant);
for(int i=0;i<medsquant;i++){
    printf("add a medicament name ");
    scanf("%s",&medicaments[i]);
    printf("add the quantite you want");
    scanf("%d",&medicaments_quantite[i]);
    medic++;
}
     /*printinf thansk you after adding medics */
    printf("thank you \n");

    printf("1 - retour \n");
    printf("2 - MENU PRINCIPALS \n");

    scanf("%d",&choix);
    do {
        if (choix==1){
        sousmenu(choix);
        }
        else
        MENU();
    }while(choix>2);
}
else if (x==2){
        printf("Liste des médicaments :\n");
        printf("medications name \t\t\t\tQuantite\n");
        for (int i = 0; i < medic; i++) {
            printf("%s \t\t\t\t\t %d\n", medicaments[i], medicaments_quantite[i]);
        }
        /*printinf thansk you after adding medics */
    printf("1 - retour \n");
    printf("2 - MENU PRINCIPALS \n");

    scanf("%d",&choix);
    do {
        if (choix==1){
        sousmenu(choix);
        }
        else
        MENU();
    }while(choix>2);
}
else if(x==3){
    char medicaments_checker[100];
    printf("whats the medication name ");
    scanf("%s",&medicaments_checker);
    for (int i = 0; i < medic; i++) {
            if (strcmp(medicaments_checker, medicaments[i]) == 0) {
                medicaments[i][0] = '\0'; // Mark the medication as removed
                medicaments_quantite[i]='\0';
                printf("Médicament supprimé avec succès.\n");

}
for(int i=0;i<medic;i++){
    if(medicaments[i]=='\0'){
    medicaments[i][i]=medicaments[i+1][i+1];
}

                            /*printinf thansk you after adding medics */
    printf("1 - retour \n");
    printf("2 - MENU PRINCIPALS \n");

    scanf("%d",&choix);
    do {
        if (choix==1){
        sousmenu(choix);
        }
        else
        MENU();
    }while(choix>2);
}
}
}
}
int main () {
    MENU();
  return 0;
}
