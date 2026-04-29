
/*
malloc - Done
______________________________________________
malloc vs calloc

pointer to pointer

Types of array
	1D Array
	MD Array
            2D Array
            3D Array
  
passing 2d Array to functions
        matrix 
            addition
            sub
            multiply
            transpose

            1  2  3         1  4  7     1 0 0
            4  5  6         2  5  8     0  1 0
            7  8  9         3  6  9     0  0 1

2d Array of char
    calloc 
    
_____________________________________

types of array

a. 1D array
b. MD array multi
    2D array    
    3D array
    4D array


*/
#include<stdio.h>
#define ROW 3
#define COL 2

int main(void)             // [0][0] [0][1]     [1][0]  [1][1] [2][0] [2][1]
{              //mat[3][2]      0      1        0  1        0    1   cols  
    int r, c, mat[ROW][COL] = {{ 11,   22 },  { 33   ,   44 }, { 55,  66  }};  
    //                         ==========      ===========     ===== rows
//                                  0                1              2
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