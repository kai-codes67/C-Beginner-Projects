#include <stdio.h>

float grade=0 , sum=0 ;
unsigned int studentNumber=1;
int studentCount=0;
int main(void){
    printf("enter the number of your student:");
    scanf("%d", &studentCount);

    while ( studentCount <= 0){
        printf("sorry this is impossible\n");
        printf("enter the number of your student again:");
        scanf("%d", &studentCount);}

    while (studentNumber<=studentCount){
        printf("enter the grad of the %u student:",studentNumber);
        scanf("%f", &grade);
        while (grade<0 || grade>20){
                printf("sorry this is impossible\n");
                printf("enter the grad of the %u student:",studentNumber);
                scanf("%f", &grade);}

        sum+=grade;
        studentNumber++;}

    printf("the grade average is:%.2f", sum/studentCount);
    return 0;
}
