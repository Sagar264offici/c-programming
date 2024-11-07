#include <stdio.h>

/*   Calculate the income tax paid by an emoployee top the government as per the slabs mentioed below


       income       |       Tax
       2.5 - 5.0 L  |      5%
       5.0 - 10.0 L |      20%
       Above 10.0 L |      30%

Note :-    There is no tax below 2.5 L. Take the income amount as an input from the user.
*/
int main()
{
    int income; float tax = 0;
    printf("Enter the income: \n");
    scanf("%d", &income);
    if (income < 250000) // If income is less than ₹2,50,000, tax is set to 0, as there is no tax for this income range.
    {
        tax = 0;
    }
    else if (income > 250000 && income < 500000)
    { // if income is between ₹2,50,000 and ₹5,00,000:
      // The taxable income in this slab is income - 250000.
        // Tax is calculated as 5% of this amount, i.e., 0.05 * (income - 250000).
        tax = 0.05 * (income - 250000);
    }
    else if (income > 500000 && income < 1000000)
    {
        tax = 0.05 * (income - 250000) + 0.2 * (income - 500000); /*
       If income is between ₹5,00,000 and ₹10,00,000:
       First, 5% tax is calculated for the amount between ₹2.5 lakh and ₹5 lakh: 0.05 * (500000 - 250000).
       Then, an additional 20% tax is calculated for the amount between ₹5 lakh and the user’s income: 0.2 * (income - 500000).
       These two values are added together to get the total tax for this range.*/
    }
    else
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
    }
    /*             If income is above ₹10,00,000:
First, 5% tax is calculated for the amount between ₹2.5 lakh and ₹5 lakh: 0.05 * (500000 - 250000).
Next, 20% tax is calculated for the amount between ₹5 lakh and ₹10 lakh: 0.2 * (1000000 - 500000).
Finally, an additional 30% tax is calculated for the amount above ₹10 lakh: 0.3 * (income - 1000000).
These values are added to get the total tax for income above ₹10 lakh.
    */
    printf("The total tax you need to pay is %.2f\n", tax);
    return 0;
}
/*  
Example Calculations


Example 1: Income = ₹4,00,000

Condition: income > 250000 && income < 500000
Calculation: tax = 0.05 * (400000 - 250000) = 0.05 * 150000 = ₹7500
Example 2: Income = ₹7,50,000

Condition: income > 500000 && income < 1000000
Calculation:
Tax on ₹2,50,000 to ₹5,00,000: 0.05 * 250000 = ₹12500
Tax on ₹5,00,000 to ₹7,50,000: 0.2 * (750000 - 500000) = 0.2 * 250000 = ₹50000
Total tax: ₹12500 + ₹50000 = ₹62500
Example 3: Income = ₹12,00,000

Condition: income > 1000000
Calculation:
Tax on ₹2,50,000 to ₹5,00,000: 0.05 * 250000 = ₹12500
Tax on ₹5,00,000 to ₹10,00,000: 0.2 * 500000 = ₹100000
Tax on income above ₹10,00,000: 0.3 * (1200000 - 1000000) = 0.3 * 200000 = ₹60000
Total tax: ₹12500 + ₹100000 + ₹60000 = ₹172500
  */