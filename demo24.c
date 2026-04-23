/*

conditional Operator (Ternary Operator)
we can write only one statement is condition is True or False

just like if else

condition ? true part : false part ;

check no is even or odd
*/

#include<stdio.h>
int main(void)
{
    int no;
    printf("\n Enter No=");
    scanf("%d", &no);
 // condition  ?   True Part              :         False Part         ;
    no%2==0 ? printf("\n %d is Even", no) : printf("\n %d is Odd", no);

    return 0;
}