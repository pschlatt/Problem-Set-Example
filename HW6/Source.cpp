//
// HomeWork6_2.cpp
//
// By: Paul Schlattmann
// Date: 26 Feb 2016
//
// Problem Statement: A parking garage charges a $2.00 minimum fee 
//to park for up to three hours and an additional $0.50 per hour 
//for each hour or part thereof over three hours.The maximum
//charge for any given 24 - hour period is $10.00.Assume that no 
//car parks for longer than 24 hours at a time.Write a program that 
//will calculate and print the parking charges for each of three customers
//who parked their cars in this garage yesterday.You should enter 
//the hours parked for each customer.Your program should print the
//results in a neat tabular format, and should calculate and
//print the total of yesterday's receipts. The program should use 
//the function calculateCharges to determine the charge for each customer.
//
//
// #### Algorithm ####
//
// preprocessor directives
//
// define user function prototype
//
// start main function
//		define and initialize variables
//		prompt user for inputting hours
//		read in values
//		set a series of variables as the output of the user function
//						with their specific input
//		calculate total hours and total charge
//		print all values in tabular format
//		pause program to view output
// end main
//
//
//start calculateCharges function
//		define and initialize variable constants
//		set if-else logic tree for all possible inputs
//		return value of the total charge
//end calculateCharges function
//






#include <stdio.h>
#include <string>



double calculateCharges(double hours);

void main(void)
{
	double h1 = 0.0;
	double h2 = 0.0;
	double h3 = 0.0;
	double tothours = 0.0;
	double c1 = 0.0;
	double c2 = 0.0;
	double c3 = 0.0;
	double totcharge = 0.0;

	puts(" ");
	puts("Parking Charges: \n\n");

	printf("Enter hours for car 1: ");
	scanf_s("%lf", &h1);
	printf("\n\nEnter hours for car 2: ");
	scanf_s("%lf", &h2);
	printf("\n\nEnter hours for car 3: ");
	scanf_s("%lf", &h3);
	puts("\n\n");


	c1 = calculateCharges(h1);
	c2 = calculateCharges(h2);
	c3 = calculateCharges(h3);
	tothours = h1 + h2 + h3;
	totcharge = c1 + c2 + c3;

	puts("Car\tHours\tCharge");
	printf_s("1\t%.1lf\t%.2lf\n", h1, c1);

	printf_s("2\t%.1lf\t%.2lf\n", h2, c2);

	printf_s("3\t%.1lf\t%.2lf\n", h3, c3);

	printf_s("TOTAL\t%.1lf\t%.2lf\n\n", tothours, totcharge);
	
	

	system("pause");

	return;
}



double calculateCharges(double hours)
{
	
	double three = 3.00;
	double mincharge = 2.00;
	double addcharge = 0.50;
	double maxcharge = 10.00;
	double minus3 = hours - 3;
	double charge = 0.0;

	if (hours <= 3)
	{
		charge = mincharge;
	}
	else if (hours > 3 && hours < 19) {
		charge = mincharge + (minus3 * addcharge);
	}
	else if (hours >= 19)
	{
		charge = maxcharge;
	}
	

	return charge;
}