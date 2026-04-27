#include<stdio.h>
 
int swap(int n1, int n2);
int main(void)
{
    int no1, no2;
    printf("Enter No1=");
    scanf("%d", &no1);
    printf("Enter No2=");
    scanf("%d", &no2);

    swap(no1, no2);
    return 0;
}
int swap(int n1, int n2)
{
    int temp;

    temp=n2;
    n2=n1;
    n1=temp;
    printf("No1 = %5d \nNo2 = %5d", n1, n2);
}