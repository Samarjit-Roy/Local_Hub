// check wheater the enter no is prime or not...
#include<stdio.h>
void main()
{
    int a,count=0,i;
    printf("Enter the no=");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count=count+1;
        }
    }
    if (count==2)
    {
        printf("%d is Prime no",a);
    }
    else
    {
        printf("%d is not Prime no",a);
    }
}