//count of digits

#include<stdio.h>
int main(void)
{
    int no, counter, ono;
    printf("\n Enter No=");
    scanf("%d", &no); //123
    counter=0;
    ono=no;                        //       T       T       T      F
    while(no!=0) //while(no!=0) +ve only   123!=0  12!=0   1!=0  0!=0
    {
        no/=10;  //no=no/10;           123/10=12  12/10=1  1/10=0
        counter++;//counter=counter+1   0+1=1      1+1=2    2+1=3
    }    //                                 3       123
    printf("\n No of Digits for %d is  %d\n", ono, counter);

    return 0;
}