#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    double emi,intr,prince;
    double r,la,w,x,y,z,z1;
    double arr[20];
    printf("Enter the Loan amount : ");
    scanf("%lf",&la);
    printf("\nEnter the rate of intrest in percentage : ");
    scanf("%lf",&r);
    printf("\nEnter the return period in months : ");
    scanf("%d",&n);
    w=(1+(r/1200));
    x=pow(w,n);
    y=x-1;
    z=x/y;
    z1=r/1200;
    emi=la*z*z1;
    printf("\nS.No\tloan\tEMI\tIntrest\tPrincipal repaid\tRemaining princiapl amount\n");
    for(i=0;i<n;i++)
    {
        arr[i]=la;
        intr=la*z1;
        prince=emi-intr;
        la=la-prince;
        printf("%d\t\t%.0lf\t%.0lf\t%.0lf\t\t%.0lf\t\t\t%.0lf\n",(i+1),arr[i],emi,intr,prince,la);
    }  
    return 0;
}
