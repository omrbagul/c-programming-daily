#include<stdio.h>
int main(void)
{
    int no1, no2;
    printf("\n Enter No1=");
    scanf("%d", &no1);
    printf("\n Enter No2=");
    scanf("%d", &no2);

// condition                true part              Condition  ? True Part                                                            false part       
    no1 > no2 ? printf("\n %d(no1) is max",no1) : no1==no2 ? printf("\n %d (no1) is equal to %d (no2)",no1,no2) : printf("\n %d (no2) is max", no2);


    return 0;
}