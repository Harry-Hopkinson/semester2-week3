
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Harry Hopkinson
 * ID: 201956529
 */

 int main( void )
 {
    // define and initialise variables for the problem data
    int salary = 36250, nationalInsurance = 8, taxRate = 15;

    // calculate the deductions and final take-home salary
    float niContribution = salary * (nationalInsurance / 100.0);
    float taxContribution = 0;

    float takeHomeSalary = salary - niContribution;
    if (takeHomeSalary > 12500)
    {
        taxContribution = ((takeHomeSalary) - 12500) * (taxRate / 100.0);
    }

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%d\n", salary);
    printf("NI contribution £%.2f\n", niContribution);
    printf("Tax contribution £%.2f\n", taxContribution);
    printf("Take home salary £%d\n", (int)(takeHomeSalary - taxContribution));

    return 0;
 }