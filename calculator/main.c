#include <stdio.h>

float num1, num2;

int main(void){

    printf("Welcome to the calculator :\n");
    printf("enter the first number in the calculation :");
    scanf("%f", &num1);

    printf("Which operation do you want?\n");
    printf("1.addition\'+\' \\ 2.subtraction\'-\' \\ 3.multiplication\'*\' \\ 4.division \'/\'\n ");

int a=0;
    scanf("%d", &a);

    while (a<0 || a>4){
         printf("sorry , this operation does not exist.\n ");
         printf("Which operation do you want?\n");
         printf("1.addition\'+\' \\ 2.subtraction\'-\' \\ 3.multiplication\'*\' \\ 4.division \'/\'\n ");
         scanf("%d", &a);
    }

    while (a!=0){
    if (a==1){
        printf("enter the second number to sum:");
        scanf("%f", &num2);
        printf("the result is: \'%.2f\' ", num1+num2);
        num1= num1+num2;}

    if (a==2){
        printf("enter the second number to sub:");
        scanf("%f", &num2);
        printf("the result is: \'%.2f\' ", num1-num2);
        num1= num1-num2;}

    if (a==3){
        printf("enter the second number to mult:");
        scanf("%f", &num2);
        printf("the result is: \'%.2f\' ", num1*num2);
        num1= num1*num2;}

    if (a==4){
        printf("enter the second number to div:");
        scanf("%f", &num2);
        printf("the result is: \'%.2f\' ", num1/num2);
        num1= num1/num2;}

    printf("\n do you want to continue?\n");
    printf("0.stop \\ 1.addition\'+\' \\ 2.subtraction\'-\' \\ 3.multiplication\'*\' \\ 4.division \'/\'\n ");
    scanf("%d", &a);

    while (a<0 || a>4){
         printf("sorry , this operation does not exist.\n ");
         printf("Which operation do you want?\n");
         printf("1.addition\'+\' \\ 2.subtraction\'-\' \\ 3.multiplication\'*\' \\ 4.division \'/\'\n ");
         scanf("%d", &a);
    }
    }
    printf("thank u for use this calculator <3. ");
    return 0;
}
