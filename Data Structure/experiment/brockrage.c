experiment no. 1
 progroam 2
#include<stdio.h>
int main()
{
    float bp,sp,p,bs,bb,tbr,st,stt,tt,t,sd,rg;
    
    printf("enter buying prize and selling prize:");
    scanf("%f%f",&bp,&sp);
    
    bs=(0.03/100)*sp;
    bb=(0.03/100)*bp;
    tbr=bs+bb;
    
    t=sp-bp;
    
    st=tbr*(10.36/100);
    stt=sp*(0.025/100);
    sd=t*(0.002/100);
    rg=t*(0.004/100);
    tt=st+stt+sd+rg;
    
    p=t-(tt+tbr);
    
    printf("total brokerage:%f\n",tbr);
    printf("turnover:%f\n",t);
    printf("total tax:%f\n",tt);
    printf("profit:%f",p);
    
    return 0;
    
}
