#include<stdio.h>
#include<stdint.h>
#include<string.h>
int32_t main()
{
  char A[33]={};
  char a[33]={};
  int first,third;
  printf("Please enter a natural number:");
  scanf("%s",A);
  int n=strlen(A);
  int z=0;
  int B[33]={};
  for(int i=0;i<n;i++)
  {
    for(int j=48;j<58;j++)
    {
      if(A[i]==j)
      {
        z=z+1;
      }
    }
    if(z!=1)
    {
      printf("error\n");
      return 0;
    }
    z=0;
  } 
  if(n==1)
  {
    printf("%s",A);
    printf("\n");
  }
  if(n>1)
  {
    for(int k=0;k<n;k++)
    {
      B[k]=A[k]-48;
    }
  }
  first=B[0];
  B[0]=B[n-1];
  B[n-1]=first;
  for(int l=0;l<n;l++)
  {
    printf("%d",B[l]);
  }
  printf("\n");
}
  
  
