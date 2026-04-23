/*loops
1. while ----> if we dont know how many times we want to execute loop.
2. for ---> if we know how many times we want to execute loop.
3. do while ----> it will execute at least once. it is used for menu driven prog.


while loop

intit; //1
while(condition) //2
{
    statement1;
    statement2;  //3
    incre/decre; //4
}//5
//6


while(1) //true 1
{

}

while(0)
{

}  
*/

#include<stdio.h>
int main(void)
{
    int no, counter;
    printf("\n Enter No=");
    scanf("%d", &no); //5

    counter=0;
        //  0  <  5                 T   T    T   T    T   F
    while(counter<=no) //condition 0<5  1<5  2<5 3<5  4<5 5<5 
    {                 // 0+1=1     1+1=2  2+1=3 3+1=4 4+1=5
        counter++;  //counter=counter+1; //counter+=1
        printf("%5d", counter); // 1 2 3 4 5
        
    }
    printf("\nEnd of Program\n");

    return 0;
}