#include <stdio.h>

int main (void)
{
   char arr[13], phone[12]; 
   printf("Enter phone number [(999)999-9999]: ");
   scanf ("%s", arr);
   int j = 0;
   for (int i = 0; i < 13; i++)
   {
       if (arr[i] != '(' && arr[i] != ')') 
       {
           phone[j]=arr[i];
           j++;
       }
       else if (arr[i] == ')') 
       {
           phone[j]='-';
           j++;
       }
   }
   printf ("You entered %s\n", phone);
   return 0;
}
