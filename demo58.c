#include<stdio.h>

void table(int n);

int main(void)
{
    int no;
    printf("Enter the No=");
    scanf("%d", &no);

    table(no);
    printf("\n");

    return 0;
}

void table(int n)
{
    int counter;

    for(counter=1 ; counter<=10 ; counter++)
    {
        printf("%5d * %5d = %5d", n, counter, n*counter);
        printf("\n");
    }

    return;
}