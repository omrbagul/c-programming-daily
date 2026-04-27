#include<stdio.h>



int main(void)
{
    int rows;
    printf("Enter No=");
    scanf("%d",&rows);
              
    for(int i=rows; i>=1; i--)
    {             
        for(int j=1; j<=i; j++)  
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

/*
PS D:\New folder\C\C-Programming\c-programming-daily> .\a.exe     
Enter No=5
* * * * * 
* * * * 
* * * 
* * 
* 
*/