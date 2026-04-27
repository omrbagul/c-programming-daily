#include<stdio.h>
int no1=100;
int main(void)
{
    printf("Global variable is no1= %d [%u]\n", no1, &no1);
    {//block 1
        int no1=50; //local variable
        printf("local variable from block 1 is no1= %d [%u]\n", no1, &no1);
        {
            int no1=30;
            printf("local variable from block 2 is no1= %d [%u]\n", no1, &no1);

        }

    }

    return 0;
}
