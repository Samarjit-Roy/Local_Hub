// C Program to calculate the sum of first N natural numbers
// using recursion
#include<stdio.h>
int sum(int no)
{
    if(no==0)
    {
        return 0;
    }
    int res=no+sum(no-1);
    return res;
}


int main()
{
    int n=5;
    int res=sum(n);
    printf("The sum is=%d",res);
    return 0;
}