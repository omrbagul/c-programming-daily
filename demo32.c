//2. for ---> if we know how many times we want to execute loop.

#include<stdio.h>
int main(void)
{
    int no, counter;
    printf("Enter no=");
    scanf("%d", &no);
    //   init     condition     incre/decre     Condition    T    T    T    T    T    F
    for(counter=1;counter<=no ; counter++)  //counter=1    1<=5 2<=5 3<=5 4<=5 5<=5 6<=5
    {                       //1+1 2+1 3+1 4+1 5+1                                
        printf("%5d",counter); //1 2 3 4 5
    }
    printf("\nEnd of Program\n");
   return 0;
}