
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:Saniha Srikanth Kakolu
 * ID: 201964405
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    // int salary;
    float salary,th_salary,ni,tax,a,b,c;

    salary = 36250; 
    ni = 0.08; // 8% 
    tax = 0.15; // 15%
     
    // calculate the deductions and final take-home salary
    a=ni*salary;
    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",a);
    b=salary-a;
    if (b>12500) {
       c=tax*b;
       printf("Tax contribution £%.2f\n",c);
       th_salary=b-c;
    }
    else {
      th_salary=b;
    }
    printf("Take home salary £ %.2f\n",th_salary);

    return 0;
 }
 // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    //printf("NI contribution £...",var_name);
    //printf("Tax contribution £...",var_name);
    //printf("Take home salary £...",var_name);