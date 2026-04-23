#include<stdio.h>
int main(void)
{

    int a = 3, b = 6;
    printf("a=%d, b=%d", a,b);

                          // 3==6  False [0]
    printf("\n a==b [%d]", a==b); // Equal to operator compare

                          //3!=6 True [1]                 
    printf("\n a!=b [%d]", a!=b);
    printf("\n__________________________________________________");
    {
        int a=6, b=3;
        int c= a>b;  //c=6>3 c=1
        printf("\n a=%d b=%d c=%d", a, b, c);

    }
    {
        int a=6, b=3;
        int c= a<b;  //c=6>3 c=1
        printf("\n a=%d b=%d c=%d", a, b, c); 
        
    }
    return 0;
}

/*
True = 1 
False = 0

____________________________________
Operators:

== Equal to op compare 6==6 True 1 6==3 False 0

!= Not Equal to  6!=6 False 0 6!=7 True 1

four jump statements:
1. break
2. continue
3. return
4. goto

*/