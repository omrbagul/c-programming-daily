#include<stdio.h>
int binary(int n) ;// decl of function
int main(void)
{
    int no, ans;
    printf("\n Enter No =");
    scanf("%d", &no);

    ans= binary(no); // function call
    printf("\n decimal (%d) to binary (%d)", no, ans);
    return 0;
}
// fun definations
int binary(int n)
{

    if( n==1)
        return 1;
    else  
        return   n%2 + 10*binary(n/2) ;  //10%2 + 10 (10/2)
        //return  10*binary(n/2) + n%2;
        //return  binary(n/2)*10 + n%2;
        

}