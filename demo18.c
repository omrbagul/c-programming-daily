#include<stdio.h>

int main(void)
{
    int no;
    printf("Enter no:");
    scanf("%d", &no);

    if(no>0)
    {
        printf("%d is Positive",no);
    }
    else if(no==0)
    {
        printf("%d is Zero",no);
    }
    else
    {
        printf("%d is Negative",no);
    }

    return 0;
}






/*
if(condition)
{

    true;
}
else if(condtion)
{
    
}
else{
    false;
}
    */