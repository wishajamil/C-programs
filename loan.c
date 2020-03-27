#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[])
{
	double amountofloan, interestrateperyr;
	int numberofpay, month;
	double emi, rate;
	double Interest, endingBalance, principalPaid;
   
	if(argc < 4)
	{
		printf("Invalid input!");
		return 1;
	}

	amountofloan = atof(argv[1]);
	interestrateperyr = atof(argv[2]);
	numberofpay = atoi(argv[3]);
     
	rate = interestrateperyr / 1200;
       
	emi = amountofloan * ((rate * pow(1 + rate, numberofpay)) / (pow(1 + rate, numberofpay) - 1));
        
	endingBalance = amountofloan;
       
	printf("\nMontly payment should be %.2f\n", emi);
        
        printf("# \t Payment \t Principal \t Interest \t Balance\n");
        for (month = 1; month <= numberofpay; month++)
	{
		Interest = endingBalance * rate;
		principalPaid = emi - Interest;
		endingBalance = endingBalance - principalPaid;
                printf("%d \t $%0.2lf \t $%0.2lf \t $%0.2lf\t $%.2lf", month, emi, principalPaid, Interest, endingBalance);
	        printf("\n");
	}
	return 0;
}
