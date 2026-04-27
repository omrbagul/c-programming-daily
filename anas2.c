#include<stdio.h>
void swap(int n1,int n2);

int main(void)
{
    int no1,no2;
    printf("Enter no:");
    scanf("%d %d",&no1,&no2);

    printf("Before Swap: %d %d\n",no1,no2);
    swap(no1,no2);

    return 0;
}

void swap(int n1,int n2)
{
    int temp;
    temp=n2;
    n2=n1;
    n1=temp;
    printf("After swap: %d %d", n1, n2);
    return;
}