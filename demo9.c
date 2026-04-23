#include<stdio.h>
int main(void)
{
    int no1=12345, no2;// 1234567
                              // 123456789 
    no2=printf("no1=%d", no1);// no1=12345
    printf("\n no2=%d", no2); // no2=9
    printf("\n");                //123456789
    no2=printf("no1=%10d", no1);// no1=-----12345
    printf("\n no2=%d", no2); // no2=14
    return 0;
}


