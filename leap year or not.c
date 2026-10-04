#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if (a%100==0)
    {
        if(a%400==0)
        {
            printf("leap year");
        }

        else 
        {
            printf("not leap year");
        }
    }
    
return 0;
}