#include<stdio.h>

int main(void)
{
    int ono,no,rem,rev;
    printf("enter no:");
    scanf("%d",&no);
    ono=no;

    while(no!=0)
    {
    rem=no%10;
    no=no/10;
    rev=rev*10+rem;
    }
   
    if(ono==rev)
    {
        printf("%d is Palindrome",ono);
    }
    else{
        printf("%d is not Palindrome",ono);
    }

    return 0;
}