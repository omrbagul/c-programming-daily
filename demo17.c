//Check no is even or odd
#include<stdio.h>
int main(void)
{
    int no;
    printf("Enter No:");
    scanf("%d",&no);

    if( no%2 == 0)  
    {
        printf("%d is Even",no);
    }
    else{
        printf("%d is Odd",no);
   
/*
    if(no%2) 
    {
        printf("%d is Odd", no);
    }
    else{
        printf("%d is Even",no);
    }
*/
    return 0;
}

/*
//if____else

if(condition)
{
   // True
}
else{
   // false
}

*/