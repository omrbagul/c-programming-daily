//Simple Calculator using Simple If

#include<stdio.h>
int main(void)
{
    int no1, no2, ans;
    char op;
    printf("Enter No1=");
    scanf("%d", &no1);

    printf("\nEnter Operator=");
    scanf("%*c%c", &op); // %*c ignores char or use getchar()

    printf("\nEnter No2=");
    scanf("%d", &no2);

    ans=0; //assignment

    if( op== '+') // + == '+' true
    {
        ans=no1+no2; 
    }
    if( op== '-')
    {
        ans=no1-no2;
    }
    if( op== '*')
    {
        ans=no1*no2;
    }
     if( op== '/')
    {
        if(no2==0)
        {
            printf("\n can not divide by Zero\n");
        }
        else {
            ans=no1/no2;
        }
       
    }

    printf("\n %5d %5c %5d = %5d\n", no1, op, no2, ans);

    return 0;
}