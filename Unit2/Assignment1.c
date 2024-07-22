/*
 * Assignment1.c
 *
 *  Created on: Jul 22, 2024
 *  Author: Sarah Muhammad Rashad
 */
#include <stdio.h>

int main()
{

	/*EX1*/
	printf("C Programming\n\n");

	fflush(stdout);

	/*EX2*/
	int integer = 0;
	fflush(stdout);
	printf("Enter an integer: ");
	fflush(stdout);
	scanf(" %i", &integer);
	fflush(stdin);
	printf("You entered: %i\n\n", integer);

	/*EX3*/
	int num1 = 0;
	int num2 = 0;
	printf("Enter two integers: ");
	fflush(stdout);
	scanf(" %i %i", &num1, &num2);
	fflush(stdin);
	printf("Sum: %i\n\n", num1+num2);
	fflush(stdout);

	/*EX4*/
	float number1 = 0;
	float number2 = 0;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf(" %f %f", &number1, &number2);
	fflush(stdin);
	printf("Product: %f\n\n", number1*number2);
	fflush(stdout);

	/*EX5*/
	char character = 0;
	printf("Enter a character: ");
	fflush(stdout);
	scanf(" %c", &character);
	fflush(stdin);
	printf("ASCII value of %c is %i\n\n", character, character);
	fflush(stdout);

	/*EX6*/
	int a = 0;
	int b = 0;
	int temp = 0;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf(" %i", &a);
	fflush(stdin);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf(" %i", &b);
	fflush(stdin);
	temp = a;
	a = b;
	b = temp;
	printf("After swapping:\n Value of a: %i\n", a);
	fflush(stdout);
	printf(" Value of b: %i\n\n", b);
	fflush(stdout);

	/*EX7*/
	int A = 0;
	int B = 0;
	printf("Enter value of A: ");
	fflush(stdout);
	scanf(" %i", &A);
	fflush(stdin);
	printf("Enter value of B: ");
	fflush(stdout);
	scanf(" %i", &B);
	fflush(stdin);
	A = A + B;
	B = A + B;
	A = B - A;
	B = B -2*A;
	printf("After swapping:\n Value of A: %i\n", A);
	fflush(stdout);
	printf(" Value of B: %i\n\n", B);
	fflush(stdout);

	return 0;
}

