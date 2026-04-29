// accpet matrix and print it in pointer notation
#include<stdio.h>
#define ROW 3
#define COL 3
int main(void)  
{             
    int r,c, mat[ROW][COL];

    printf("\n enter elements of array ( 4_1 )=\n");
    for(r=0; r<ROW; r++)
    {
         for(c=0; c<COL; c++)
         {
            printf("\n mat[%d][%d] = ", r,c);
            //scanf("%d", &mat[r][c]); // array notation
            scanf("%d", (*(mat+r)+c)); // pointer notation
         }            //*(*(mat+r)+c)  print data  (*(mat+r)+c) print address
         printf("\n");
    }

    printf("\n elements of array \n");
    for(r=0; r<ROW; r++)
    {
         for(c=0; c<COL; c++)
         {
            //printf("%5d [%u]",mat[r][c], &mat[r][c] );  // array notation
            printf("%5d [%u]", *(*(mat+r)+c) , (*(mat+r)+c) ); // pointer notation
         }                 //     data           address
         printf("\n");
    }
    printf("\n\n\n\n");
    return 0;
}