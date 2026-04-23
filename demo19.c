#include<stdio.h>
int main(void)
{
    int no;
    printf("Enter your marks:");
    scanf("%d", &no);

    if(no>=80)
    {
        printf("1st Class with Distinction");
    }
    else if(no>70)
    {
        printf("1st Class");
    }
    else if(no>40)
    {
        printf("Pass Class");
    }
    else{
        printf("Fail");
    }

    return 0;
}

