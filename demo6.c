#include<stdio.h>

int main(void)
{
    char ch1;

    printf("Enter Character:");  //label/promt
    scanf("%c",&ch1); //ch1 = a

    printf("ch1= %d \n&ch1=%u",ch1,&ch1);

    return 0;
}


//A - 65 to Z - 90
//a - 97 to z -122
//0 - 48   to 9 - 57