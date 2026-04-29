// 2d array
#include<stdio.h>
#define ROW 3
#define COL 3
int main(void)      
{                 
    int r,c;
    //int mat[ROW][COL]={ { 11 , 22,33 }, { 44 ,55 , 66 }, { 77 ,88 ,99 }};  // allowed
    //                     =======           ======          ======   rows  
    //                          0               1           2
    //int mat[][]={ { 11 , 22,33 }, { 44 ,55 , 66 }, { 77 ,88 ,99 }}; // error
    //demo3_5.c:11:9: error: array type has incomplete element type ‘int[]’
    int mat[][COL]={ { 11 , 22,33 }, { 44 ,55 , 66 }, { 77 ,88 ,99 }};  // alloed
    //when we init 2D array at time decl specifing col is must and row is optional
    // because number col will specify where next row will start in memory

    //int mat[ROW][]={ { 11 , 22,33 }, { 44 ,55 , 66 }, { 77 ,88 ,99 }}; //error
    //demo3_5.c:17:9: error: array type has incomplete element type ‘int[]’
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
/*
*/