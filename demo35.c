#include<stdio.h>
int main(void)
{
    int no1, no2, counter;
    printf("Enter No1=");
    scanf("%d",&no1); 
    printf("Enter No2=");
    scanf("%d",&no2); 

    for(counter=no1;counter<=no2;counter++)
    {
        printf("%d\n",counter); 
    }
    printf("End of Program");


    return 0;
}