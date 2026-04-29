#include<stdio.h>

#define ROW 3
#define COL 2

int main(void)
{
            //       3   2
    int r, c , mat[ROW][COL];

    printf("Enter elements of array =\n");
    for(r=0 ; r<ROW ; r++)
    {
        for(c=0 ; c<COL ; c++)
        {           //      0  0
            printf("\n mat[%d][%d] = ", r, c);
            scanf("%d", &mat[r][c]);
        }
        printf("\n");
    }

    printf("Elements of array =\n");
    for(r=0 ; r<ROW ; r++)
    {
        for(c=0 ; c<COL ; c++)
        {           
            printf("%5d [%u] ", mat[r][c], &mat[r][c]);
        }
        printf("\n");
    }
    printf("\n\n\n\n");

    return 0;
}


