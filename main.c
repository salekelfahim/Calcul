#include <stdio.h>

int main (){
float n1;
float n2;
int op;

printf("Give me a number:");
scanf("%f", &n1);
printf("Give me another number:");
scanf("%f", &n2);
printf("Choose the operator: 1-Multiplication   2-Addition   3-Subtraction   4-Division  ");
scanf("%d", &op);
if (op== 1 ) {
float reslt = n1 * n2;
    printf("The result is %.2f", reslt);

}

if (op==2){
    float reslt = n1 + n2;
    printf("THe result is %.2f", reslt);
}
if (op==3){
    float reslt = n1 - n2;
    printf("The result is %.2f", reslt);
}
if (op==4){
    float reslt = n1 / n2;
    printf ("The result is %.2f", reslt);

}

return 0;
}
