/*
static & global variable will init only once in data segment
 scope of local variable only with block
 & life of local variable only with block

 scope of static variable where u declare ( here it is only with display fun)
& life of static variable is with in prog

block level 
function level
file level
program level

static variable retain values accross function calls ( data seg) 
*/
#include<stdio.h>
void display()
{
    auto int a=11, b=22, c=33; // local  variable
    // 11+1=12  22+1=23  33+1=34
    a++,        b++,     c++; //12 23 34
    printf("\n a=%d  b=%d c=%d", a, b,c);
    static int x=11,y=22, z=33;
    //11+1=12  22+1=23  33+1=34 
    x++,       y++,     z++; //12 23 34 
    printf("\t x=%d  y=%d z=%d",x, y,z);
    return ;    
}
int main(void)
{
    display(); // a=12 b=23 c=34 x=12 y=23 z=34
    printf("\n===========");
    display(); // a=12 b=23 c=34 x=13 y=24 z=35
    printf("\n===========");
    display(); // a=12 b=23 c=34 x=14 y=25 z=36
    printf("\n===========");

    return 0;
}