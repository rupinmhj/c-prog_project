
#include<stdio.h>
#include<conio.h>
#include<string.h>

#include "structemployee.c"
#include "menu2.c"

FILE *f, *ft, *fo;
#include "insertemployee.c"
#include "displayemployee.c"
#include "updateemployee.c"
#include "deleteemployee.c"

int main()
{
    int choice;
    while(1)
    {
        menu2();
        printf("\n\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insertEmployee();
            break;
        case 2:
            displayEmployee();
            break;
        case 3:
            updateEmployee();
            break;
        case 4:
            deleteEmployee();
            break;
        case 5:
            printf("Enter ANY KEY to EXIT.");
            exit(0);
            break;
        default:
            printf("Invalid choice no. Please enter number from 1 to 5.");
            break;

        }
    }

    getch();
    return 0;
}
