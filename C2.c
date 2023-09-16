/*Ecrivez un programme en C qui vérifie si un caractère saisi par l'utilisateur est une voyelle ou non en utilisant l'instruction switch case.*/
#include <stdio.h>
#include <stdlib.h>
int voyelle (char C) {

  switch (C)
  {
  case 'A':
  case 'U':
  case 'I':
  case 'E':
  case 'Y':
  return 1;
  default:
  return 0;
  }
}

int main(){
  char number;


  printf("enter a number : ");
  scanf(" %c",&number);

  if(voyelle(number))
  printf("its a voyelle ");
  else
  printf("its not a voyelle Sorry . the voyelles ARE (A,U,I,Y,E)");Q
  return 0;
}