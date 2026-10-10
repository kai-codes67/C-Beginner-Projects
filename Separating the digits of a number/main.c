#include<stdio.h>

long int num;

int main(void){

    printf("enter a natural number(0 to 99999) :\n");
    scanf("%lld", &num);

    while (num>99999 || num<0){
            if (num>99999){
            printf("sorry, the number is bigger than expected.");}
            else if (num<0){
            printf("sorry, the number is not natural.");}
        printf("try again:\n");
        scanf("%d", &num);
    }
    int a= num/10000;
    int b= num/1000;
    int c= num/100;
    int d= num/10;

    printf("the Ten-thousands:%d \n", a);
    printf("the Thousands:%d \n",b%10);
    printf("the Hundreds:%d \n",c%10 );
    printf("the Tens:%d \n",d%10 );
    printf("the Ones:%d \n",num%10 );

    return 0;
}
