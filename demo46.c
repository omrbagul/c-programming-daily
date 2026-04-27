#include<stdio.h>
int main(void)
{   
    int no, counter, ono;
    printf("Enter the No:");
    scanf("%d",&no);
    ono=no;
    
    for(counter=0; no!=0; counter++)
    {
        no=no/10; //no/=10;
    }
    printf("No of Digits for %d is %d", ono, counter);



    return 0;
}