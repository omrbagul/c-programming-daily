//swap using addition and substraction

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
    int m1, m2;
    m1= n1+n2;
    m2= n1-n2;
    m1= n1-n2;
    printf("After swap: %d %d", m1, m2);
    return;
}