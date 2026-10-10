#include <stdio.h>

long long num, totle=1;

int main(void)
{
    printf("enter the number: ");
    scanf("%lld", &num);

    while(num<0){
        printf("sorry, this is invalid number enter the number: ");
        scanf("%lld", &num);
    }

    for(long long cont=num ; cont>0 ; cont--){
       totle*=cont;
    }
    printf("\nthe Factorial of this number is :%lld", totle);

    return 0;
}

