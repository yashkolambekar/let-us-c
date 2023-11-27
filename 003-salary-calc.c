# include <stdio.h>

// TOTAL SALARY CALCULATOR
// Dearness allowance is 40% of base salary 
// Rent allowance is 20% of base salary

int main(){
    int base_salary;
    float d_allowance, rent_allowance, total_salary;
    printf("Enter Your Base Salary: ");
    scanf("%d", &base_salary);
    d_allowance = base_salary * 0.4;
    rent_allowance = base_salary * 0.2;
    total_salary = base_salary + d_allowance + rent_allowance;
    printf("\n");
    printf("Base Salary = %d\n", base_salary);
    printf("Dearness Allowance = %f\n", d_allowance);
    printf("Rent Allowance = %f\n", rent_allowance);
    printf("Total Salary = %f\n", total_salary);
    return 0;
}