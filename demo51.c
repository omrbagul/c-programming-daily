#include<stdio.h>
int main(void)
{
    int row,col,cnt=0;

    for(row=1; row<=10; row++)
    {
        for(col=1;col<=10; col++) 
        {
            cnt++;
            printf("%5d", row+ (col-1)*10);
        }
        printf("\n");
    }
    //printf("\n cnt=%d\n", cnt);

    return 0;
}