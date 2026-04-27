//do while
/*
init; //1
do 
{
    statement1;
    statement2;
    increment/decrement;
}while(condition);
*/
#include<stdio.h>
int main(void)
{
    int no1, no2, choice, ans;

    do 
    {
        printf("\n Enter No1=");
        scanf("%d", &no1);
    
        printf("\n Enter No2=");
        scanf("%d", &no2);

        printf("\n 1. Add \n 2. Minus \n 3. Multiply \n 4. div \n 0. Exit");
        printf("\n Enter Your choice=");
        scanf("%d", &choice);

        ans=0;
        switch(choice)
        {
            default: printf("\n invalid choice");
                // break; go out switch
                continue; // go to next itration
            case 1: // add
                    ans= no1+no2; break;
            case 2: // minus
                    ans= no1-no2; break;
            case 3: // multiply
                    ans= no1*no2; break;
            case 4: // div
                    ans= no1/no2; break;
            case 0:
                    printf("\n End of prog using menu");
                    return 0;
        }
        printf("\n ans=%d", ans);

        printf("\n Enter 1 to continue or 0 to Exit =");
        scanf("%d",&choice);

    }while(choice!=0);
    return 0;
}

