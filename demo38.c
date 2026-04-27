// Print table of a given no.

#include<stdio.h>
int main(void)
{
    int no,counter,ans;
    printf("Enter NO=");
    scanf("%d",&no);

  
    counter=1;
    do{
        ans= no*counter;
        printf("%5d * %5d = %5d\n", no, counter, ans);
        counter++;
        
    }while(counter<=10);


    return 0;
}