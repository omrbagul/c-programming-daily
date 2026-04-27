#include<stdio.h>
int main(void)
{
    int no, counter;

    printf("Enter the Number=");
    scanf("%d", &no);
    counter=0;
    printf("\nfactors of %d are ", no);
    while(counter<=no)
    {
        counter++;
        if(no%counter!=0) 
    //10%0=0 10%1=0 10%2=0 10%3=1 10%4=2 10%5= 10%6 10%7 10%8 10%9 10%10
          printf("%5d",counter);
    }
    printf("\n");
    return 0;
}

//counter=2