#include<stdio.h>
int main(void)
{
    int no;
    printf("Enter the no:");
    scanf("%d",&no);

    no > 0 ? printf("%d is Positive", no) : no==0 ? printf("%d is Zero",no) : printf("%d is Negative", no);

    return 0;
}
