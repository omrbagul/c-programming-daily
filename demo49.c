//if we reverse the no it is equal to the given no 
//then it is called as Palindrome Number

#include<stdio.h>
int main(void)
{
    int no, rem, rev,ono;
    printf("Enter the No=");
    scanf("%d",&no);

    ono=no;
    rem=rev=0;

    while(no!=0)
    {
        rem=no%10;
        no=no/10;
        rev=rev*10+rem;
    }
    printf("Reverse of given no %d is %d",ono, rev);
    if(rev==ono)
    {
        printf("\nPalindrome");
    }
    else{
        printf("\nNot Palindrome");
    }


    return 0;
}