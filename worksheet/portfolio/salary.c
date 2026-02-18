
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:Saniha Srikanth Kakolu
 * ID: 201964405
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    float salary,th_salary,ni,tax,a,b,c;

    salary = 36250; 
    ni = 0.08; // 8% 
    tax = 0.15; // 15%
     
    // calculate the deductions and final take-home salary
    a=ni*salary;
    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",a);
    b=salary-a;

    // checking condition
    
    if (b>12500) {
       float d=b-12500;
       c=tax*d;
       printf("Tax contribution £%.2f\n",c);
       th_salary=b-c;
    }
    else {
      th_salary=b;
    }

    // printing the final result

    printf("Take home salary £%.2f\n",th_salary);

    return 0;
 }
