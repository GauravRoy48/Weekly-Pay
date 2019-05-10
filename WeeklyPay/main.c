#include <stdio.h>
#include <stdlib.h>

double pay = 12.00;
int ot = 40;

int main()
{
   // declare variables
   int hours = 0;
   double grossPay = 0.0;
   double taxes = 0.0;
   double netPay = 0.0;

   printf("Enter num of hours worked this week: ");

   // get the input
   scanf("%d", &hours);

   // calculate the gross pay
   if (hours <= 40)
       grossPay = hours * pay;
   else
   {
     grossPay = 40 * pay;
     grossPay += ((hours - 40) * (pay * 1.5));
   }

   // calculate taxes
   if (grossPay <= 300)
   {
       taxes = grossPay * 0.15;
   }
   else if(grossPay > 300 && grossPay <= 450)
   {
       taxes = 300 * 0.15;
       taxes += (grossPay - 300) * 0.2;
   }
   else if (grossPay > 450)
   {
       taxes = 300 * 0.15;
       taxes += 150 * 0.2;
       taxes += (grossPay - 450) * 0.25;
   }

   // calculate the netpay
   netPay = grossPay - taxes;

   // display output
   printf("Your gross pay is: %.2f\n", grossPay);
   printf("Your taxes is: %.2f\n", taxes);
   printf("Your net pay is: %.2f\n", netPay);

   return 0;
}
