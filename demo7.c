#include<stdio.h>

int main(void)
{
    int no1,no2,ans;
    float ans1;

    printf("Enter No1:");
    scanf("%d",&no1);
    printf("Enter No2:");
    scanf("%d",&no2);

    ans1=no1/no2;
    printf("\n%d / %d = %f", no1, no2, ans1);

    return 0;
}