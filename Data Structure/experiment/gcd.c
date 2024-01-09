#include<stdio.h>
int gcd(int x, int y);
void main ()
{ int x,y,i;
 printf("enter two no.s=");
 scanf("%d%d",&x,&y);
 i=gcd(x,y);
 printf("%d",i);
}
int gcd(int x, int y)
{ int i;
for(i=x;i>0;i--)
 { if(x%i==0 && y%i==0)
   break;
 }
 return i;
}
