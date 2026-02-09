
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Harry Hopkinson
 * ID: 201956529
 */

 int main( void )
 {
    // define and initialise variables for the problem data
    int salary = 40000;
    float nationalInsurance = 5.00, taxRate = 15.00;

    if (salary < 14000 || salary > 40000)
    {
        printf("Salary can only be in the range £14,000 and £40,000.\n");
        return 1;
    }
    else if (nationalInsurance < 0 || nationalInsurance > 10)
    {
        printf("National insurance can only be in the range 0-10 percent.\n");
        return 1;
    }
    else if (taxRate < 10 || taxRate > 30)
    {
        printf("Tax rate can only be in the range 10-30 percent.\n");
        return 1;
    }

    // calculate the deductions and final take-home salary
    float niContribution = salary * (nationalInsurance / 100);
    float taxContribution = 0;
    if (salary - niContribution > 12500)
    {
        float taxContribution = ((salary - niContribution) - 12500) * (taxRate / 100);
    }

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%d\n", salary);
    printf("NI contribution £%.2f\n", niContribution);
    printf("Tax contribution £%.2f\n", taxContribution);
    // printf("Take home salary £%d",var_name);

    return 0;
 }