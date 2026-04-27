#include<stdio.h>

void table(int n);
int table_no(int n1, int n2);
int main(void)
{
    int no, counter, ans;
    printf("Enter the No=");
    scanf("%d", &no);

    table(no);
    printf("\n================================\n");

     printf("\nTable using Main Function\n");
    for(counter=1 ; counter<=10 ; counter++)
    {
        printf("%5d * %5d = %5d", no, counter, table_no(no, counter));
        printf("\n");
    }
    return 0;
}

void table(int n)
{
    int counter;
    printf("\nTable using Function\n");
    for(counter=1 ; counter<=10 ; counter++)
    {
        printf("%5d * %5d = %5d", n, counter, n*counter);
        printf("\n");
    }

    return;
}
int table_no(int n1, int n2)
{
    int temp;
    temp = n1*n2;

    return temp;
}