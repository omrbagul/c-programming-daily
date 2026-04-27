// addition and multiply 2 numbers using function and display ans in main
#include<stdio.h>
void sumprod(int n1, int n2, int *ps,  int *pp); // fun decl
            //=============   =================== 
            // pass by value   pass by address  
int main(void)
{
    int no1, no2, sum=0, prod=0;
    printf("\n Enter No1=");
    scanf("%d", &no1);
    printf("\n Enter No2=");
    scanf("%d", &no2);

    sumprod(no1, no2, &sum, &prod); // fun call
   // no1, no2 are actual arg , 
    printf("\n %d + %5d = %5d", no1, no2, sum);
    printf("\n %d * %5d = %5d\n", no1, no2, prod);
    return 0;
}
// fun defination 10     20       108          112
//               no1     no2      &sum        &prod 
void sumprod(int n1, int n2, int *ps,  int *pp)
{
    *ps =   n1 + n2;  // *108=n1+n2;   *108= 10+20 =30
    *pp =   n1 * n2;  // *112=n1*n2;   *112 =10*20 =200
    return;
}
