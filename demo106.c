/*matrix addition using function
*/

#include<stdio.h>
#define ROW 2
#define COL 2
//void accept_matrix(int m[ROW][COL], int row, int col);  // allowed
void accept_matrix(int m[][COL], int row, int col);   // allowd
void display_matrix(const int m[][COL], int row, int col); //allowed
void matrix_addition(int m1[][COL], int m2[][COL],int result[][COL], int row, int col);

int main(void)  
{             
    int  mat1[ROW][COL], mat2[ROW][COL], ans[ROW][COL]={0};

    printf("\n enter elements mat1=\n");
    accept_matrix(mat1, ROW, COL);

    printf("\n elements of mat1 = \n");
    display_matrix(mat1, ROW, COL); // mat1 is actual ar
    
    printf("\n enter elements mat2=\n");
    accept_matrix(mat2, ROW, COL);

    printf("\n elements of mat2 = \n");
    display_matrix(mat2, ROW, COL); // mat1 is actual ar


    matrix_addition(mat1, mat2, ans, ROW, COL);
    printf("\n addition of mat = \n");
    display_matrix(ans, ROW, COL); // mat1 is actual ar

    printf("\n\n\n\n");
    return 0;

}
// m is formal arg
void accept_matrix(int m[][COL], int row, int col)   // allowd
{
    int r,c;
    for(r=0; r<row; r++)
    {
         for(c=0; c<col; c++)
         {
            printf("\n m[%d][%d] = ", r,c);
            //scanf("%d", &m[r][c]); // array notation
            scanf("%d", (*(m+r)+c)); // pointer notation
         }            //*(*(m+r)+c)  print data  (*(m+r)+c) print address
         printf("\n");
    }
    return ;
}
void display_matrix(const int m[][COL], int row, int col) //allowed
{
    int r, c;
    for(r=0; r<row; r++)
    {
         for(c=0; c<col; c++)
         {
            //printf("%5d [%u]",m[r][c], &m[r][c] );  // array notation
            printf("%5d [%u]", *(*(m+r)+c) , (*(m+r)+c) ); // pointer notation
         }                 //     data           address
         printf("\n");
    }
    return;
}

void matrix_addition(int m1[][COL], int m2[][COL],int result[][COL], int row, int col)
{
    int r,c;
    for(r=0; r<row; r++)
    {
        for(c=0; c<col; c++)
        {
           // result[r][c]   =    m1[r][c]  + m2[r][c];
            *(*(result+r)+c) = *(*(m1+r)+c) + *(*(m2+r)+c);
        }
    }
    return;
}