//Swap two no using call by refernce...
#include<stdio.h>
#include<conio.h>

void fun(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

void main()
{
    int x,y;
    printf("Enter the value x & y:");
    scanf("%d %d",&x,&y);
    fun(&x,&y);
    printf("After swapping x = %d & y = %d",x,y);
    getch();
}