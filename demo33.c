
//2. for ---> if we know how many times we want to execute loop.

#include<stdio.h>
int main(void)
{
    int no, counter;
    printf("Enter no=");
    scanf("%d", &no);
    //   init     condition     incre/decre     Condition    T    T    T    T    T    F
    for(counter=no;counter>=1 ; counter--)  //counter=1    
    {                                               
        printf("%5d",counter); //5 4 3 2 1
    }
    printf("\nEnd of Program\n");
   return 0;
}