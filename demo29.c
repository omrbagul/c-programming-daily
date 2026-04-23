#include<stdio.h>
int main(void)
{
    int no, counter;
    printf("\n Enter No=");
    scanf("%d", &no); //5

    counter=0;
        //  0  <  5                 T   T    T   T    T   F
    while(1) //condition 0<5  1<5  2<5 3<5  4<5 5<5 
    {                 // 0+1=1     1+1=2  2+1=3 3+1=4 4+1=5
        counter++;  //counter=counter+1; //counter+=1
        printf("%5d\n", counter); // 1 2 3 4 5
        
    }
    printf("\nEnd of Program\n");

    return 0;
}