/* passing 2d array to function passing COL is must but row is optional
*/

#include<stdio.h>
#define ROW 3
#define COL 3
//void accept_matrix(int m[ROW][COL], int row, int col);  // allowed
void accept_matrix(int m[][COL], int row, int col);   // allowd
void display_matrix(const int m[][COL], int row, int col); //allowed
int main(void)  
{             
    int  mat[ROW][COL];

    printf("\n enter elements of array using fun ( 3_3 )=\n");
    accept_matrix(mat, ROW, COL);

    printf("\n elements of array using fun(3_3) \n");
    display_matrix(mat, ROW, COL); // mat is actual arg
    
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
