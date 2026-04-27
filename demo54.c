#include<stdio.h>

float addition(float n1, float n2);
int main(void)
{
    float no1, no2, ans;
    printf("Enter No1 and No2=");
    scanf("%f %f", &no1,&no2);

    ans=addition(no1,no2);
    printf("Addition is %.2f",ans);

    return 0;
}
float addition(float n1, float n2)
{
    float temp;
    temp = n1+n2;
    return temp;
}