// addition and multiply 2 numbers using function and display ans in main
// print error "can not divide by 0" in main if no2==0 
#include<stdio.h>
int flag; //int flag=0;  global variable
void sumproddiv(int n1, int n2, int *ps,  int *pp, int *pd); // fun decl
            //=============   ==============================
           // pass by value   pass by address or pass by ref 
int main(void)
{
    int no1, no2, sum=0, prod=0, div=0;
    printf("\n Enter No1=");
    scanf("%d", &no1);
    printf("\n Enter No2=");
    scanf("%d", &no2);

    sumproddiv(no1, no2, &sum, &prod, &div); // fun call
   // no1, no2 are actual arg , 
    printf("\n %d + %5d = %5d", no1, no2, sum); // 20 + 10= 30
    printf("\n %d * %5d = %5d", no1, no2, prod); //20 *10 =200
    if( flag==1) //if flag==1 only if when no2(n2) ==0
        printf("\n can not divide by zero\n");
    else 
        printf("\n %d / %5d = %5d\n", no1, no2, div); // 20 /10 =2
    return 0;
}
// fun defination 20      10       108     112      116
//                no1     no2      &sum    &prod    &div
void sumproddiv(int n1, int n2, int *ps,  int *pp, int *pd)
{
    *ps =   n1 + n2;  // *108=n1+n2;   *108 = 20+10 =30
    *pp =   n1 * n2;  // *112=n1*n2;   *112 = 20*10 =200
    if( n2==0)
        flag=1 ;
    else
        *pd =   n1 / n2; // *116= n1/n2;   *116 = 20/10 =2
    return;
}
