// factorial of given no

//5! -->> 1 * 2 * 3 * 4 * 5 = 120
//6! -->> 1 * 2 * 3 * 4 * 5 * 6 = 720

#include<stdio.h>
int main(void)
{
    int no, counter, fact;
    printf("Enter No=");
    scanf("%d", &no);
    counter=0, fact=1; //counter=0, fact=1 
                    //  T     T    T    T   T   F
    while(counter<no)// 0<5  1<5  2<5  3<5 4<5 5<5
    {   
        counter++;//counter+counter+1; 0+1         1+1   2+1    3+1      4+1 
        printf("%5d *", counter);  //   1           2     3      4        5
        fact*=counter;// fact=fact*counter; 1*1=1 1*2=2 3*2=6  6*4=24  24*5=120    
    }   // fact= 1 2 3 6 24 120
    printf("\b=%5d", fact);
    return 0;
}