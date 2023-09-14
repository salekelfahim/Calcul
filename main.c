#include <stdio.h>
#include <string.h>
int main(){

printf("Calcul\n");
calcul();

return 0;

}

void calcul(){


float n1;
float n2;
int op;
float reslt;


printf("\nGive me a number:");
scanf("%f", &n1);
printf("Give me another number:");
scanf("%f", &n2);
printf("Choose the operator: 1-Multiplication   2-Addition   3-Subtraction   4-Division  ");
scanf("%d", &op);
switch(op) {

case (1) :
   reslt = n1 * n2;
    printf("The result is %.2f", reslt);
break;

case (2) :
    reslt = n1 + n2;
    printf("The result is %.2f", reslt);
break;

case (3) :
    reslt = n1 - n2;
    printf("The result is %.2f", reslt);
break;

case (4) :
    reslt = n1 / n2;
    printf("The result is %.2f", reslt);
break;
default:
    printf("Invalid!!");


}


}


