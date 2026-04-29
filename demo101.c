// 2d array
#include<stdio.h>
#define ROW 3
#define COL 3
int main(void)    //  
{                 //  if we init array partly at time decl then elements will init with 0
    int r,c, mat[ROW][COL]={ 11 , 22, 33,  44, 55,  77  };
    //                           =========     ==========       ======   rows  
    //                              0           1             2

    printf("\n elements of array \n");
    for(r=0; r<ROW; r++)
    {
         for(c=0; c<COL; c++)
         {
            printf("%5d [%u]",mat[r][c], &mat[r][c] );
         }
         printf("\n");
    }
    return 0;
}
