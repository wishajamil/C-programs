#include<stdio.h>
#include<math.h>
void output_amortized(float loan_amount,float intrest_rate,int term_years)
{
   int i,j;                    
   int payments;        
   float loanAmount;           
   float anIntRate;            
   float monIntRate;             
   float emi;           
   float balance;                
   float monthPrinciple;         
   float monthPaidInt;           

  
   balance=loan_amount;
   monIntRate = ((intrest_rate/(100*12)));
   payments=term_years;  
   emi = (loan_amount * monIntRate * (pow(1+monIntRate, payments)/(pow (1+monIntRate, payments)-1)));
   monthPaidInt = balance * monIntRate;
   monthPrinciple = emi-monthPaidInt;
   balance = balance - monthPrinciple;
   
   printf("\nMonthly payment should be :%.2f\n",emi);
   printf("\n %7s %15s %14s %10s %13s \n", " # ", " Payment ", " Principal ", " Interest ", " Balance ");
       
   for(i=0;i<payments;i++)
   {
      printf("\n %6d \t $%-10.2f $%-10.2f $%-10.2f $%-12.2f ",(i+1),'$',emi,'$',monthPaidInt,'$',monthPrinciple,'$',balance);
      printf("\n");
      monthPaidInt = balance * monIntRate;
      monthPrinciple = emi-monthPaidInt;
      balance = balance - monthPrinciple;
   }
}
int main()
{
  float principle,rate;
  int termYear;
  printf("Enter amount of loan: $");
  scanf("%f",&principle);
  printf("Enter Intrest rate per year :%");
  scanf("%f",&rate);
  printf("Enter number of payments: ");
  scanf("%d",&termYear);
  output_amortized(principle,rate,termYear);
}
