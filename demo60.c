// register storage class
// it is used where u r modify data fequentlty ->>> loops
// v  storage class as we 
// can get address of register storage class variable


#include<stdio.h>
int main(void)
{
    register int no1;
    printf("\n Enter No1=");
    scanf("%d", &no1);
    printf("\n no1=%d [%u]", no1, &no1);
    return 0;
}