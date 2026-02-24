
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Harry Hopkinson
 * ID: 201956529
 */

 int main( void )
 {
    // define and initialise variables for the problem data
    float salary = 36250, nationalInsurance = 0.08, taxRate = 0.15;

    // calculate the deductions and final take-home salary
    float niContribution = salary * nationalInsurance;
    float taxContribution = 0;

    float takeHomeSalary = salary - niContribution;
    if (takeHomeSalary > 12500)
    {
        taxContribution = ((takeHomeSalary) - 12500) * taxRate;
    }

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", niContribution);
    printf("Tax contribution £%.2f\n", taxContribution);
    printf("Take home salary £%.2f\n", takeHomeSalary - taxContribution);

    return 0;
 }