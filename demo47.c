#include<stdio.h>
int main(void)
{
    int no, counter, ono;
    printf("Enter No=");
    scanf("%d",&no);

    ono=no;
    counter=0;
    do{
        no/=10;
        counter++;

    }while(no!=0);
    printf("No of Digits for %d is %d", ono, counter);


    return 0;
}