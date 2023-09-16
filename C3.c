/*Ecrivez un programme C pour calculer la somme de deux valeurs entières données. Si les deux valeurs sont identiques, il renvoie le triple de leur somme.*/
#include <stdlib.h>
#include <stdio.h>
int number1,number2;
int somme (){
  printf("enter your number : ");
  scanf("%d",&number1);
  printf("enter your number : ");
  scanf("%d",&number2);

  if(number1==number2)
  return number1+number2;
  else
  return (number1+number2)*3;
}

int main (){
  printf("%d",somme());
return 0;
}