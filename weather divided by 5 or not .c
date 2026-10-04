#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if (a%5!=0)
    {
        printf("not divided by 5");
    }

    else
    {
        printf("divided by 5");
    }
    
    return 0;
}  