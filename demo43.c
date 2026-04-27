/*
Date:24/04/2026
Friday
*/

//sum 1st n numbers 

#include<stdio.h>
int main(void)
{
    int no, counter, sum;
    printf("\n Enter No=");
    scanf("%d", &no);
    counter=sum=0; //counter=0 and sum=0
        //    True       T   T   T   T   T   F   
    while(counter<no) //0<5 1<5 2<5 3<5 4<5 5<5
    {
        counter++;  // countercounter+1; 0+1;   1+1;   2+1   3+1     4+1    
        printf("%5d +", counter); //      1      2     3      4      5
        sum+=counter; // sum=sum+counter; 0+1=1 1+2=3 3+3=6  6+4=10 10+5=15
    }
    printf("\b=%5d\n", sum); //15
    return 0;
}