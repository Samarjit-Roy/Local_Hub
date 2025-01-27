//Learning about how to use double pointer...
#include<stdio.h>
#include<conio.h>
void main()
{
    int x=10;
    int clrscr();
    //inilazition of pointer using * 
    int *a;

    //double pointer create
    int **b;
    b=&a;

    //store the address of x in a
    a=&x;
    printf("The address of x is %u\n",&x);
    printf("The address of x is %u\n",a);

    //address of a 
    printf("The address of a= %u\n",&a);

    //double pointer
    printf("The value of b= %u\n",b);
    printf("The address of b= %u\n",&b);

    getch();
}