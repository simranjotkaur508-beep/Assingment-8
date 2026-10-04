#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    D==b*b+4*a*c;
    if(D>0)
        {
              printf("number is real and distint");

         }



    else


          if(D==0) 
            {
                printf("number is real and equal");
            }    



            else

            
                 {
                    if(D<0)
                      printf("number is imaginary");
                 }

    
    return 0;
}