//Reverese of Given No

#include<stdio.h>
int main(void)
{
    int no, rev, rem, ono;
    printf("Enter the Number=");
    scanf("%d",&no);

    ono=no;
    rem=rev=0;

    while(no!=0)
    {
        rem=no%10;
        no=no/10;
        rev=rev*10+rem;
    }
    printf("Reverse of Number %d is %d", ono, rev);

    return 0;
}