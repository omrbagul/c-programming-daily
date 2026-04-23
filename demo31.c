#include<stdio.h>
int main(void)
{
    int no, counter;
    printf("\n Enter No=");
    scanf("%d", &no); //5

    counter=no;
        //  5 <  5                  T     T   T    T   T    F
    while(counter>=1) //condition 5>=1 4>=1 3>=1 2>=1 1>=1 0>=1
    {                 //5-1=4 4-1=3 3-1=2 2-1=1 1-1=0
                          
        printf("%5d", counter); // 5 4 3 2 1
        counter--;  //counter=counter-1; //counter-=1
        
    }
    printf("\nEnd of Program\n");

    return 0;
}