/*Pointer to pointer
•The pointer that stores address of another pointer 
variable is called as ‘pointer to pointer’.
•Example :-

*/
#include<stdio.h>

int main(void)
{      //           px variable address [100]      *px point to x 10
        //  100       104   100     
    int x = 10;  int *px = &x;  //*px = 100 points to x [10]
  //  printf("%d", *px);
    printf("\n");
    printf("x = %d\n", x); //10 --
    printf("&x = %d\n", &x); // &x = --
    printf("px = %d\n", px); // px 
    printf("&px = %d\n", &px); //&px =
    printf("*px = %d\n", *px); // *px = --
    printf("\n========================================\n");
    int **ppx = &px;

    printf("ppx = %d\n", ppx); // ppx = --
    printf("&ppx = %d\n", &ppx); // &ppx = --
    printf("*ppx = %d\n", *ppx); // *ppx = --
    printf("**ppx = %d\n", **ppx); // *ppx = --
    printf("\n");   

        // 108   104   
  // int **ppx = &px; // ppx=104 *ppx=&px[104] *ppx=104  **ppx=10

 //  printf("%d", **ppx); //10
    return 0;
}
