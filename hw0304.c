#include<stdio.h>
#include<stdint.h>
#include<math.h>
int main()
{
  double a,b,c;
  double s,t;
  double accumulateA;
  double accumulateB;
  double ans;
  int m=1;
  printf("Please enter a quadratic polynomial (ax^2+bx+c):");
  scanf("%lf,%lf,%lf",&a,&b,&c);
  if(a!=0 && b!=0 && c!=0)
  printf("The polynomial is %0.0lfx^2+%0.0lfx+%0.0lf\n",a,b,c);
  printf("Please enter the interval [s,t]:");
  scanf("%lf,%lf",&s,&t);
  if(s>=t) 
  {
    printf("error");
    return 0; 
  }
  double integral=((t-s)*(t-s)*(t-s)*a)/3+((t-s)*(t-s)*b)/2+(t-s)*c;
  
  printf("The integral: %lf\n",integral);
  
  for(int n=2;n<=65536;n=pow(2,m))
  {
    m+=1;
    for(int i=0;i<=n-1;i++)
    {
      accumulateA=(s+((t-s)/n)*i)*(s+((t-s)/n)*i);
      accumulateB=(s+((t-s)/n)*i);
      ans=(t-s)*(a*accumulateA+b*accumulateB+c)/n;
    }
    
    printf("The Riemann sum of n =%5d: %lf\n",n,ans);
  }

}
    
  

