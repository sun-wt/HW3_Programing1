#include<stdio.h>
#include<stdint.h>
int main()
{
  int32_t num;
  int32_t kind;
  int32_t time;
  printf("Start\n");

  printf("Please enter a natural integer:");
  scanf("%d",&num);
  if(num<0) printf("wrong input");
  if(num==10||num==35)
  {
    printf("S1\n");
    kind=1;
  } 
  else if(num==11)
  {
    printf("S3\n");
    kind=3;
  }
  else if(num==20||num==78)
  {
    printf("S5\n");
    kind=5;
  }
  else
  { 
    printf("Start\n");
    kind= 0;
  }
  while(kind!=7)
  {
  //start
    while(kind==0)
    {
      printf("Please enter a natural integer:");
      scanf("%d",&num);
      if(num<0) printf("wrong input");
      if(num==10||num==35)
      {
        printf("S1\n");
        kind=1;
      } 
      else if(num==11)
      {
        printf("S3\n");
        kind=3;
      }
      else if(num==20||num==78)
      {
        printf("S5\n");
        kind=5;
      }
      else
      { 
        printf("Start\n");
        kind= 0;
      }
    }
    //one
    while(kind==1)
    {
      printf("Please enter a natural integer:");
      scanf("%d",&num);
      if(num<0) printf("wrong input");
      if(num==19)
      {
        printf("S2\n");
        kind=2;
      } 
      else if(num==12||num==36)
      {
        printf("S6\n");
        kind=6;
      }
      else
      { 
        printf("S1\n");
        kind= 1;
      }
    }
    //three
    while(kind==3)
    {
      printf("Please enter a natural integer:");
      scanf("%d",&num);
      if(num<0) printf("wrong input");
      printf("S4\n");
      kind=4;
    }
    //five
    while(kind==5)
    {
      printf("Please enter a natural integer:");
      scanf("%d",&num);
      if(num<0) printf("wrong input");
      if(num==1)
      {
        printf("S4\n");
        kind=4;
      } 
      else if(num==2)
      {
        printf("S6\n\n");
        kind=6;
      }
      else
      { 
        printf("Start\n");
        kind= 0;
      }
    }
    //two
    while(kind==2)
    {
      printf("Please enter a natural integer:");
      scanf("%d",&num);
      if(num<0) printf("wrong input");
      if(num==43)
      {
      printf("S2\n");
      kind=2;
      } 
      else if(num==99)
      {
        printf("Final\n");
        kind=7;
        return 0;
      }
      else
      { 
        printf("Start\n");
        kind= 0;
      }
    }  
    //six
    while(kind==6)
    {
      printf("Please enter a natural integer:");
      scanf("%d",&num);
      if(num<0) printf("wrong input");
      if(num==108)
      {
      printf("Final\n");
      kind=7;
      return 0;
      } 
      else
      { 
        printf("S5\n");
        kind= 5;
      }
    }
    //four
    while(kind==4)
    {
      printf("Please enter a natural integer:");
      scanf("%d",&num);
      if(num<0)
      { 
        printf("wrong input");
        return 0;
      }
        printf("S6\n");
        kind=6;
    }
  }
}




























  
