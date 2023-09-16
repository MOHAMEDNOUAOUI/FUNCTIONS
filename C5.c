/*Ecrire un programme C piloté par menu pour convertir une année donnée en,
Mois
Jours
Heures
Minutes*/
#include <stdio.h>
#include <stdlib.h>
int choix;
int number,years,months,days,hours,mins,seconds;
void menu (){
  printf("enter number of years : ");
  scanf("%d",&number);
  printf("1 - converte to months\n");
  printf("2 - converte to days\n");
  printf("3 - converte to hours\n");
  printf("4 - converte to mins\n");
  printf("5 - converte to seconds\n");
  printf("6 - EXIT PROGRAMM\n");
  printf("enter 1-5 : ");
  scanf("%d",&choix);
}
void choix_1 (){
    switch(choix){
      case 1:{
            months=number*12;
            printf("the number of months are %dmonths",months);
            break;
      }
      case 2:{
            days=number*365;
            printf("the number of days are %ddays",days);
            break;
      }
      case 3:{
            hours=number*365*24;
            printf("the number of hours are %dhours",months);
            break;
      }
      case 4:{
            mins=number*365*24*60;
            printf("the number of minutes are %dmins",mins);
            break;
      }
      case 5:{
            seconds=number*365*24*60*60;
            printf("the number of minutes are %dseconds",seconds);
            break;
      }
      default:
        printf("you exited the program");
    }
}

int main () {
  menu();
  choix_1(choix);
  return 0;
}




