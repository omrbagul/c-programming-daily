#include<stdio.h>

int main(void)
{
    int no, counter,ono;
    printf("Enter no:");
    scanf("%d",&no);
    counter=0;
    ono=no;

    do{
        no/=10;
        counter++;
    }
    while(no!=0);

    printf("Digit of %d is %d",ono,counter);
    return 0;

}