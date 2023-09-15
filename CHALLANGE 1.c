#include <stdio.h>
#include <stdlib.h>
char message1(char C[20]){
    printf("bonjour %s ",C);
    return ;
}
int main()
{
    char name[20];
    printf("enter your name");
    scanf("%s",&name);



    message1(name);
    return 0;
}
