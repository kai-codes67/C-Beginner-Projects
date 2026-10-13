#include <stdio.h>

int main(void)
{
    int ag,bg,cg,eg,fg,num;
    char grad;
        ag=bg=cg=eg=fg=0;
    printf("enter the number of students: ");
    scanf("%d", &num);
    while (num<=0){
        printf("Invalid number. enter the number of students: ");
        scanf("%d", &num);
    }
    for (int i=1; i<=num ; i++){
        if (i == 1) {
            printf("enter the letter grade of the %dst student: ", i);
        }
        else if (i == 2) {
            printf("enter the letter grade of the %dnd student: ", i);
        }
        else if (i == 3) {
            printf("enter the letter grade of the %drd student: ", i);
        }
        else {
            printf("enter the letter grade of the %dth student: ", i);
        }
        scanf(" %c",&grad);

        while (grad!='a'&&grad!='b'&&grad!='c'&&grad!='e'&&grad!='f'&&grad!='A'&&grad!='B'&&grad!='C'&&grad!='E'&&grad!='F'){
        puts("");
        printf("Invalid letter grade.\n");
        if (i == 1) {
            printf("enter the letter grade of the %dst student: ", i);
        }
        else if (i == 2) {
            printf("enter the letter grade of the %dnd student: ", i);
        }
        else if (i == 3) {
            printf("enter the letter grade of the %drd student: ", i);
        }
        else {
            printf("enter the letter grade of the %dth student: ", i);
        }

        scanf(" %c", &grad);
        }
        switch (grad){
            case 'a':
            case'A':
                ag++;
            break;

            case 'b':
            case'B':
                 bg++;
            break;

            case 'c':
            case'C':
                cg++;
            break;

            case 'e':
            case 'E':
                eg++;
            break;

            case 'f':
           case 'F':
                fg++;
            break;
        }
    }
    printf("the number of student that get the grad 'A' is: %d \n", ag);
    printf("the number of student that get the grad 'B' is: %d \n", bg);
    printf("the number of student that get the grad 'C' is: %d \n", cg);
    printf("the number of student that get the grad 'E' is: %d \n", eg);
    printf("the number of student that get the grad 'F' is: %d \n", fg);
    return 0;
}
