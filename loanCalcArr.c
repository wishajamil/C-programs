#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float principal, interstRate, monthlyInterestRate;
    float emi, startingBalance, interest, principalPaid, endingBalance;
    int numOfMonths, month;
    float interestArr[30], principalPaidArr[30], endingBalanceArr[30];

    printf("Enter amount of loan: ");
    scanf("%f", &principal);
    
    printf("Enter Interest rate per year: ");
    scanf("%f", &interstRate);
    
    printf("Enter number of payments: ");
    scanf("%d", &numOfMonths);
    
    monthlyInterestRate = (float)(interstRate / (12*100.0));
   
    emi = principal * (monthlyInterestRate / (1 - pow( (1 + monthlyInterestRate) , (-numOfMonths) )));
   
    startingBalance = principal;

    printf("\n Monthly Payment: $%.2f \n", emi);
    for(month = 1; month <= numOfMonths; month++)
    {
       interestArr[month-1] = (startingBalance * monthlyInterestRate);
       principalPaidArr[month-1] = emi - interestArr[month-1];
       endingBalanceArr[month-1] = (startingBalance - principalPaidArr[month-1]);
       startingBalance = endingBalanceArr[month-1];
    }
    printf("\n %7s %15s %14s %10s %13s \n", " # ", " Payment ", " Principal ", " Interest ", " Balance ");
   
    for (month = 1; month <= numOfMonths; month++)
    {
        printf("\n %6d \t $%-10.2f $%-10.2f $%-10.2f $%-12.2f ", month, emi, principalPaidArr[month-1], interestArr[month-1], endingBalanceArr[month-1]);
    }
    printf("\n");
    return 0;
}
