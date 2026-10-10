#include <stdio.h>

int num,ifnegnum, divisor, numofdiv,counter=0, stop=1 ;

int main(void)
{
  while (stop!=0){
    printf(" enter the number that you want to get his divisors:");
    scanf("%d", &num );
    printf(" the divisors of the number %d are: ", num);
    ifnegnum= num ;

    if(num==0){printf("∞");}
    if(num<0){ num=-num;}
    numofdiv=0;

    if(numofdiv==0)
            {
               numofdiv=1 ;
                while (numofdiv <= num && numofdiv>=1)
                    {
                        divisor=num/numofdiv;
                        if(num%numofdiv==0){printf("%d ", -divisor);}
                        numofdiv++;
                    }
            }

    numofdiv=num;
    while (numofdiv <= num && numofdiv>=1)
        {
        divisor=num/numofdiv;
        if(num%numofdiv==0){
                printf("%d ", divisor);
                counter++;
                }
        numofdiv--;
        }
    if (ifnegnum>1 && counter==2){printf("\n\n this number is Prime number\n");}
    else {printf("\n\n this number is not Prime number\n");}
    counter=0;
    printf("\n\n if you want to stop enter 0.\n if you want to continue enter 1.\n");
    scanf("%d", &stop);
    while(stop>1 || stop <0){
        printf("\n Sorry, this operation is not available. try again:\n ");
        printf("\n if you want to stop enter 0.\n if you want to continue enter 1.\n");
        scanf("%d", &stop);
    }
    }
  return 0;
}
