/*Écrivez un programme C qui permet de calculer les solutions possible d’une équation 2ème degré.*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
char a_b_c[3]={'a','b','c'};
float numbers_a_b_c[3];
int i;
int delta;
float x1,x2;
void equation_2eme_degree () {
  /*loop for entring A B C */
for ( i = 0; i < 3; i++)
{
printf("enter %c",a_b_c[i]);
scanf("%f",&numbers_a_b_c[i]);
}

/*printf for equations visualising */
printf("(%.2f)x+(%.2f)x+(%.2f)",numbers_a_b_c[0],numbers_a_b_c[1],numbers_a_b_c[2]);
}


/*another function for training ... for calculation solutions*/
float calculation (){
  delta = numbers_a_b_c[1]*numbers_a_b_c[1]-(4*numbers_a_b_c[0]*numbers_a_b_c[2]);



  if (delta==0)
    {
      if(numbers_a_b_c[0]!=0){
         x1 = -numbers_a_b_c[1] / (2*numbers_a_b_c[0]);
      printf("1 Solution for this equation %.2f",x1);
      }
      else{
        printf("a=0 i cant");
      }
     
    }


    else if(delta >0)
    {
      if(numbers_a_b_c[0]!=0){
      x1 = (-numbers_a_b_c[1] + sqrt(delta)) / (2*numbers_a_b_c[0]);
      x2 = (-numbers_a_b_c[1] - sqrt(delta)) / (2*numbers_a_b_c[0]);
      printf("2 soluiotns for this equation  x1=%.2f  x2=%.2f",x1,x2);
      } 
      else
      printf("i cant a =0");
      
    }
    
  else
      printf("sorry no solutions for this equations");
      
      return 0;
  }
 



void main (){
  equation_2eme_degree();
  calculation();

}