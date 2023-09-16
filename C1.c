/*Ecrivez un programme qui demande un nombre et affiche si ce nombre est paire ou impaire*/
#include <stdio.h>
#include <stdlib.h>
int nombre;

int main (){
printf("enter your number Sir : ");
  scanf("%d",&nombre);

  if(nombre%2==0)
  printf("this number is pair ");
  else
  printf("this is not pair");
  return 0;
}







