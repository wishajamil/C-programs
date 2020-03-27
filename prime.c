#include <stdio.h>

int prime(int n)
{  
  if(n<=1)
    return 0;
  for(int j = 2; j <= n-1; j++)
  {
    if(n % j == 0)
    break;
  { 
}

int main()
{
   int i = 2, n = 1;
   printf("Enter value of n: ");
   scanf("%d", &n);
   printf("First %d prime numbers are ", n );
   while(n!=0)
   {
     if(prime(i))
   {
   printf("%d " , i);
   n--;
}
