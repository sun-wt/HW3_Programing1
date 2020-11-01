#include<stdio.h>
int main()
{
  int AnnuallyPayment;
  int age;
  int year;
  double AnnualReturn;
  int InsuranceCost;
  int InsuranceValue;
  double InsuranceFee1,InsuranceFee2,InsuranceFee3;
  double First,Second,Third,Forth,Fifth,uyear,dyear;
  double m;



  printf("SIP Plan\n");
  //
  printf("Annually payment:");
  scanf("%d",&AnnuallyPayment);
  if(AnnuallyPayment<=0)
  {
    printf("wrong input\n");
    return 0;
  }
  //
  printf("Insurance fee in the first five years( 0 is assumed afterwards):\n");
  printf("60,30,30,15,15\n");
  //
  printf("Insurance fee of:1\n");
  //
  printf("Monthly insurance processing fee:100\n");
  //
  printf("Age:");
  scanf("%d",&age);
  if(age<=0)
  {
    printf("wrong input\n");
    return 0;
  }
  //
  printf("How many years of payment:");
  scanf("%d",&year);
  if(year<=0)
  {
    printf("wrong input\n");
    return 0;
  }
  //
  printf("Expected annually return on investment rate:");
  scanf("%lf",&AnnualReturn);

  //
  if(age<=20) InsuranceCost=2000;
  else InsuranceCost=100*(age-20)+2000;
  InsuranceFee1=AnnuallyPayment*0.6-AnnuallyPayment*0.01;
  InsuranceFee2=AnnuallyPayment*0.3-AnnuallyPayment*0.01;
  InsuranceFee3=AnnuallyPayment*0.15-AnnuallyPayment*0.01;

  m=(AnnualReturn/1200)+1;
  printf("%lf\n",m);
  
  printf("--------------------------------------------------\n");
  printf("Your Payment And Account Value Table\n");
  
  InsuranceValue=AnnuallyPayment-(InsuranceCost+InsuranceFee1);
  First=(InsuranceValue-100)*m;
  for(int i=3;i<=12;i++)
  {
    First=(First-100)*m;
  }
  printf("%d: %6d,%.1lf\n",age,AnnuallyPayment,First);
  
  InsuranceValue=AnnuallyPayment-(InsuranceCost+100+InsuranceFee2);
  Second=(First+InsuranceValue-100)*m;
  for(int j=1;j<=11;j++)
  {
    Second=(Second-100)*m;
  }
  printf("%d: %6d,%.1lf\n",age+1,AnnuallyPayment*2,Second);
  //
  InsuranceValue=AnnuallyPayment-(InsuranceCost+200+InsuranceFee2);
  Third=(Second+InsuranceValue-100)*1.004167;
  for(int j=1;j<=11;j++)
  {
    Third=(Third-100)*m;
  }
  printf("%d: %6d,%.1lf\n",age+2,AnnuallyPayment*3,Third);
  //
  InsuranceValue=AnnuallyPayment-(InsuranceCost+300+InsuranceFee3);
  Forth=(Third+InsuranceValue-100)*m;
  for(int j=1;j<=11;j++)
  {
    Forth=(Forth-100)*m;
  }
  printf("%d: %6d,%.1lf\n",age+3,AnnuallyPayment*4,Forth);
  //
  InsuranceValue=AnnuallyPayment-(InsuranceCost+400+InsuranceFee3);
  Fifth=(Forth+InsuranceValue-100)*m;
  for(int j=1;j<=11;j++)
  {
    Fifth=(Fifth-100)*m;
  }
  printf("%d: %6d,%.1lf\n",age+4,AnnuallyPayment*5,Fifth);
  //
  uyear=Fifth;
  for(int k=6;k<=year;k++)
  {
    InsuranceValue=AnnuallyPayment-(InsuranceCost+100*(k-1));
    uyear+=InsuranceValue;
    for(int j=1;j<=12;j++)
    {
       uyear=(uyear-100)*m;
    }
    printf("%d: %6d,%.2lf\n",k+age-1,AnnuallyPayment*k,uyear);
  }
  //
  dyear=uyear;
  for(int l=year+1;l<=100-age+1;l++)
  {
    InsuranceValue=-(InsuranceCost+100*(l-1));
    dyear+=InsuranceValue;
    for(int j=1;j<=12;j++)
    {
      dyear=(dyear-100)*m;
    }
    printf("%d: %6d,%.2lf\n",l+age-1,AnnuallyPayment*year,dyear);
  }
  
  return 0;
}

  


