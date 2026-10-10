#include <stdio.h>

int conter,max,b;

int main(void)
{
    printf("How many numbers do you want to compare? ");
    scanf("%d",&conter);
    puts("");
    while (conter<=0){
        printf("Invalid input. Please try again : ");
        scanf("%d",&conter);
        puts("");
    }
    printf("enter the first number:");
    scanf("%d",&max);
    for (int c=2 ; c<=conter ; c++){
        printf("enter the %d number:",c);
        scanf("%d",&b);
        if (b>max){max =b;}
        }
    printf("\nthe biggest number is: %d\n" ,max);
    return 0;
}
