expepriment no. 1
program 1.3
#include<stdio.h>

int main()
{
    int w;
    float amt =155.00;
    printf("enter the amount of water:");
    scanf("%d",&w);
    if(w<=1000)
        {
            printf("%f",amt);
        }
    else if(w<2000)
       {
           
            amt=155+((w-1000)*0.175);       
            printf("%f",amt);
       }
    else if(w<=3000)
       {
            
             amt=(155)+(175)+((w-2000)*0.2);
            printf("%f",amt);
       }
    
    else
    {
        printf("%f",700.00);
    } 
    return 0;
}
