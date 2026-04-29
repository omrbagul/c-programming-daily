//2D Array

#include<stdio.h>
#define ROW 3
#define COL 2

int main(void)           
{                   
    int r, c, mat[ROW][COL] = {11,  22 , 33 , 44 , 55, 66 };  
    //                         ========   =======  ===== rows
//                                  0        1        2
    printf("\n Elements of array \n");
        //   0 <  3   
    for(r=0; r < ROW ;  r++)
    {

        for(c=0; c < COL ;  c++)
        {

            printf("%5d [%u]", mat[r][c], &mat[r][c]);
        }
        printf("\n");
    }
    
    return 0;
}