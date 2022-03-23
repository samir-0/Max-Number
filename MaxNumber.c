#include<stdio.h>
int main(void)
{
    int a, b, c, max ;

    printf("Input a numbers--> ");
    scanf("%d",&a);

    printf("Input a second numbers--> ");
    scanf("%d",&b);

    printf("Input a third numbers--> ");
    scanf("%d",&c);

    if (a > b)
    { 
        max = a;
    }
    else
    {
        max = b ;
    }
    if (c > max)
    {
       max =  c   ;
    }
    printf("max is %d \n",max);
    return 0;  
}
