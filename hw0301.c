#include <stdio.h>
int main()
{
  int a=0,b=0;
  printf("please enter the width:");
  scanf("%d",&b);
  printf("\nplease enter the height:");
  scanf("%d",&a);
  printf("\n");
  int ans[a][b];
  int times=1,m=0,n=0,mc=0,nc=0;
  for(int i=0;i<a;i++)
  {
    for(int j=0;j<b;j++)
    {
      ans[i][j]=0;
    }
  }
  while(times<=a*b)
  {
    for(int M=0;M<b;M++)
    {
      if (ans[nc][M]==0)
      {
        if (times<=a*b)
        {
          ans[nc][M]=times;
          times=times+1;
          mc=M;
	}
      }
    }
    for(int N=0;N<a;N++)
    {
      if (ans[N][mc]==0)
      {
        if (times<=a*b)
	{
          ans[N][mc]=times;
          times=times+1;
          nc=N;
        }
      }
    }
    for(int M1=b-1;M1>m-1;M1-=1)
    {
      if (ans[nc][M1]==0)
      {
        if (times<=a*b)
	{
          ans[nc][M1]=times;
          times=times+1;
          mc=M1;
        }
      }
    }
    for(int N1=a-1;N1>n-1;N1-=1)
    {
      if (ans[N1][mc]==0)
      {
        if (times<=a*b)
	{
          ans[N1][mc]=times;
          times=times+1;
          nc=N1;
        }
      }
    }
  }
  for(int x=0;x<a;x++)
  {
    for(int y=0;y<b;y++)
    {
      printf("%4d  ",ans[x][y]);
    }
    printf("\n");
  }
}






















