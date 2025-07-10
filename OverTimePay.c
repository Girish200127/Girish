#include <stdio.h>
// Write a program to calculated overtime pay of  1 empolyes ,over time payed at rate of 12 rupees per hour 
void main()
    {
        int workhr ,overtime ;
        float overtime_salary;
        workhr= 0;
        while (workhr<=0)
        {
        printf("Entre user hour :");
        scanf("%d", &workhr);

        }
        if (workhr>=40)
        {
           overtime=workhr-40;
           overtime_salary=overtime*12;

           printf("Total hours of work %d:",overtime);
           printf("overtime_salary: %f",overtime_salary);

        }
           

    }