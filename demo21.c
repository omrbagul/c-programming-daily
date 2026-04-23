#include<stdio.h>
int main(void)
{
    char ch;
    printf("Enter Char=");
    scanf("%c",&ch);
   // printf("\n ch=%c ch=%d", ch, ch);
    //A=65 and Z=90 diff 32
    //a=97 and z=122
    if( ch>=65 && ch<=90) //capital to small
    {
        ch+=32;  //ch=ch+32; short hand operator
    }
    printf("\n ch=%c ch=%d", ch, ch);

    if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("\n%c is Vowels\n", ch);
    else if( ch>=97 && ch<=122)
        printf("\n%c is Consonants\n", ch);
    else if(ch>=48 && ch<=57)
        printf("\n%c is Digit\n", ch);
    else
        printf("\n%c is other char\n", ch);
    return 0;
}