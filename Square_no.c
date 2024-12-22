//Takeing a user input and makeing it sqaure with the help of function...
#include<stdio.h>
#include<conio.h>

int square ( int n)
{
    int result;
    result=n*n;
    return(result);
}

int main()
{
    int no,sq;
    printf("Enter the no=");
    scanf("%d",&no);
    sq=square (no);
    printf("The square of %d no is= %d",no,sq);
    return 0;
}