#include<stdio.h>
int main(void)
{
    int month;
    printf("\n Enter Month=");
    scanf("%d", &month);

    switch(month)
    {
        default:
                printf("\n Invalid Month");
                break;
        case 1:
                printf("\n Jan has 31 days");
                break;
        case 2:
        {
            int year;
            printf("\n Enter Year=");
            scanf("%d", &year);
            if( year%4==0)
                printf("\n Feb has 29 day [Leap Year]");
            else
                printf("\n Feb has 28 day [Not a Leap Year]");
        }
             break;
        case 3:
                printf("\n Mar has 31 days");
                break;
        case 4:
                printf("\n Apr has 30 days");
                break;
        case 5:
                printf("\n May has 31 days");
                break;
    }
    return 0;
}

