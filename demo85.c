//swap using global variable
// global variables can be access in the whole prog so
// no need to pass them as agrument function


#include<stdio.h>
int no1, no2; //global varible 
void swap(void);

int main(void)
{
    printf("\n Enter No1=");
    scanf("%d", &no1);
    
    printf("\n Enter No2=");
    scanf("%d", &no2);

    printf("\n before swap in main no1=%d [%u] no2=%d [%u]", no1, &no1, no2, &no2); 
    
    swap();

    printf("\n after swap in main no1=%d [%u] no2=%d [%u]", no1, &no1, no2, &no2); 

    return 0;
}

void swap (void)
{
    int temp;
    printf("\n before swap in swap no1=%d [%u] no2=%d [%u]", no1, &no1, no2, &no2); 
    temp=no1;
    no1=no2;
    no2=temp;
    printf("\n after swap in swap no1=%d [%u] no2=%d [%u]", no1, &no1, no2, &no2); 

    return;
}