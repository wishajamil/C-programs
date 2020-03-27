#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float principal, interstRate, monthlyInterestRate;
    float emi, startingBalance, interest, principalPaid, endingBalance;
    int numOfMonths, month;

    printf("Enter amount of loan: ");
    scanf("%f", &principal);
    
    printf("Enter Interest rate per year: ");
    scanf("%f", &interstRate);
    
    printf("Enter number of payments: ");
    scanf("%d", &numOfMonths);
    
    monthlyInterestRate = (float)(interstRate / (12*100.0));
    
    emi = principal * (monthlyInterestRate / (1 - pow( (1 + monthlyInterestRate) , (-numOfMonths) )));
    
    startingBalance = principal;
    
    printf("\n Monthly Payment: $%.2f\n ", emi);
    
    printf("\n %7s %15s %14s %10s %13s \n"," # ", " Payment ", " Principal ", " Interest ", " Balance ");
    
    for(month = 1; month <= numOfMonths; month++)
    {
       interest = (startingBalance * monthlyInterestRate);
       principalPaid = emi - interest;
       endingBalance = (startingBalance - principalPaid);
   
       printf("\n %6d \t $%-10.2f $%-10.2f $%-10.2f $%-12.2f ", month, emi, principalPaid, interest, endingBalance);
       startingBalance = endingBalance;
    }

    printf("\n");
    return 0;
}
