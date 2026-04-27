#include<stdio.h>

int factorial(int n); //declaration of function

int main(void)
{
    int no,ans;

    printf("Enter the No:");
    scanf("%d",&no);

    ans=factorial(no); // call the function  ans=120 
    printf("\nFactorial of %d is %d",no, ans);

    return 0;
}
int factorial(int n)
{
    int counter,fact;
    printf("\n");
    // counter=1 fact=1     1<=5                                            F
    for(counter=fact=1; counter<=n; counter++)//1<=5  2<=5 3<=5 4<=5  5<=5 6<=5
    {                       //counter=1 =1+1=2 =2+1=3 3+1=4 4+1=5 5+1=6
        fact*= counter; //fact= fact*counter; //1*1=1 1*2=2 2*3=6 6*4=24 24*5=120 
        printf(" %5d *", counter); //1 *  2 * 3 * 4 * 5 * 
    }                             //___  ___  ___ ___ ___
    printf("\b ");

    return fact; //120
}