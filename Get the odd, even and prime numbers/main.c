#include <stdio.h>

int limit, conter, p,d=0;

int main(void)
{
    printf("enter the last natural number:");
    scanf("%d", &limit);
    while(limit<=0){
        printf("sorry,this is invalid number.\n try again:");
        scanf("%d", &limit);
    }

    printf("\n the even number that up to %d are: ", limit);
    for(conter=0 ; conter <=limit ; conter+=2 ){ printf("%d ",conter);}
    puts("");

    printf("\n the odd number that up to %d are: ", limit);
    for(conter=1 ; conter <=limit ; conter+=2 ){ printf("%d ",conter);}
    puts("");

    printf("\n the prime number that up to %d are: ", limit);
    for(conter=2;conter<=limit;conter++){
        for(p=1; p<=conter ; p++){
            if(conter%p==0){d++;}
        }
        if (d==2){printf("%d ",conter);}
        d=0;
        }
    puts("");

    return 0;
}
