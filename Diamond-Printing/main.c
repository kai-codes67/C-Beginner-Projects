#include <stdio.h>

int main(void)
{
    int r;
    printf("enter the half diagonals of the diamond: ");
    scanf("%d",&r);
    puts("");
    while (r<=0){
         printf("Invalid input! The half-diagonal must be a positive integer. Please try again: ");
         scanf("%d",&r);
         puts("");
    }
    for (int c=1; c<=r;c++){
        for(int i=r-c; i>0;i--){
            printf(" ");
        }
        for(int d=1; d<=c*2-1;d++){
            printf("*");
        }
        puts("");
        }
    for (int c=r-1; c>=1;c--){
        for(int i=r-c; i>0;i--){
            printf(" ");
        }
        for(int d=1; d<=c*2-1;d++){
            printf("*");
        }
        puts("");
        }


    return 0;
}
