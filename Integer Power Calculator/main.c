#include <stdio.h>

int pawor (int,int);
int main(void)
{
    int x,z;
    printf("enter the number: ");
    scanf("%d", &x);
    printf("enter the pawor: ");
    scanf("%d", &z);

     while (z<0){
        printf("invalid inpute. the pawor must be grater then 0. \nenter the pawor again:");
        scanf("%d",&z);
    }

    if (z==0&& x==0){printf("This is an indeterminate case.");}
    else if (z==0){printf("the number %d pawred by %d eqwale :%d",x,z,1); }
    else {printf("the number %d pawred by %d eqwale :%d",x,z,pawor(x,z));}

    return 0;
}

int pawor (int x,int z){
    int resulte=1;
    for (int y=1 ; y<=z ;y++){
        resulte *=x;
    }
    return resulte;
}
