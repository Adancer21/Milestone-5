#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//declaring structure
struct struct_example
{
	int integer;
	float decimal;
	char name[20];
};

//declaring union
union union_example
{
	int integer;
	float decimal;
	char name[20];
};

void main()
{
	//creating variable for structure
	//and initializing values difference
	//six
	struct struct_example s = { 18,38,"EZ Calculator" };

	//creatin variable for union
	//and initializing values
	union union_example u = { 18, 38,"EZ Calculator" };

	printf("structure data: \n integer: %d\n"
		"decimal: %.2f/n name: %\n",
		s.integer, s.decimal, s.name);
	printf("\nunion data:\n integer: %d\n"
		"decimal: %.2f\n name: %s\n",
		u.integer, u.decimal, u.name);

	int main()
	{
		//declaration of local variable op;
		int op, n1, n2;
		float res;
		char ch;
		do
		{
			//displays the multiple operations of the EZ Calculator
			printf("Select an operation to perform the calculation in EZ Calculator:");
			printf("\n 1 Addition \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Exit \n \n Please, Make a choice");

			scanf_s("%d", &op);//accepts a numeric input to choose the operation


		//use switch statement to call an operation
			switch (op)
			{
				Module 1:
				// Add two numbers
				printf("You chose: Addition");
				printf("\n Enter First Number:");
				scanf_s("%d", &n1);
				printf("Enter Second Number:");
				scanf_s("%d", &n2);
				res = n1 + n2; //Add two numbers
				printf("Additions of two numbers is:%.2f", res);
				break;//break the function
				Module 2:
				//Subtract two numbers
				printf("You chose:Subtraction");
				printf("\n Enter First Number:");
				scanf_s("%d", &n1);
				printf("Enter Second Number:");
				scanf_s("%d", &n2);
				res = n1 - n2;//subtract two numbers
				printf("Subtraction of two numbers is:%.2f", res);
				break;//break the function

				Module 3:
				//Multiplication of the numbers
				printf("You chose:Multiplication");
				printf("\n Enter First Number:");
				scanf_s("%d", &n1);
				printf("Enter Second Number:");
				scanf_s("%d", &n2);
				res = n1 * n2; //multiply two numbers
				printf("Multiplication of two numbers is:%.2f", res);
				break;//break the function

				Module 4:
				//Division of the numbers
				printf("You chose:Division");
				printf("\n Enter First Number:");
				scanf_s("%d", &n1);
				printf("Enter Second Number:");
				scanf_s("%d", &n2);
				if (n2 == 0)
				{
					printf("\n Divisor cannot be zero. Please enter another value");
					scanf_s("%d", &n2);
				}
				res = n1 / n2; //divide two numbers
				printf("Division of two numbers is:%.2f", res);
				break;//break the function

				Module 5:
				printf("You chose:Exit");
				exit(0);
				break;//break the function

			default:
				printf("Something is wrong!!");
				break;
			}
			printf("\n\n * **************************************\n");
		} while (op != 7);


		return 0;
	}
