//menu driven

#include<stdio.h>
int main(void)
{
    int no1, no2, choice, ans;

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
                  return 0;
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
    return 0;

}