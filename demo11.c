#include<stdio.h>
int main(void)
{
    int no1, no2, no3, no;
    printf("\n Enter no1,no2 and no3=");
    no=scanf("%d%d%d", &no1, &no2, &no3);
    printf("no of inputs= %d",no);

    
    printf("\n Enter no1,no2= ");
    no=scanf("%d%d", &no1, &no2);
    printf("no of inputs= %d",no);

    
    printf("\n Enter no1 ");
    no=scanf("%d", &no1);
    printf("no of inputs= %d",no);

    return 0;
}