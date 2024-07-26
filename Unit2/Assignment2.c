/*
 * Assignment2.c
 *
 * Created on: Jul 22, 2024
 * Author: Sarah Muhammad Rashad
 */

#include <stdio.h>

int main() {
	/*EX1*/
	int integer = 0;
	printf("Enter the integer you want to check: ");
	fflush(stdout);
	scanf(" %i", &integer);
	fflush(stdin);
	if (integer % 2 == 0) {
		printf("%i is even.\n\n", integer);
		fflush(stdout);
	} else {
		printf("%i is odd.\n\n", integer);
		fflush(stdout);
	}

	/*EX2*/
	char character = 0;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf(" %c", &character);
	fflush(stdin);
	switch (character) {
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		printf("%c is a vowel.\n\n", character);
		fflush(stdout);
		break;
	default:
		printf("%c is a consonant.\n\n", character);
		fflush(stdout);
		break;
	}

	/*EX3*/
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf(" %i %i %i", &num1, &num2, &num3);
	fflush(stdin);
	if (num1 > num2) {
		if (num1 > num3) {
			printf("%i is the largest number.\n\n", num1);
			fflush(stdout);
		} else if (num1 < num3) {
			printf("%i is the largest number.\n\n", num3);
			fflush(stdout);
		} else {
			printf("number1 = number 3 = largest number = %i.\n\n", num1);
			fflush(stdout);
		}
	} else if (num1 < num2) {
		if (num2 > num3) {
			printf("%i is the largest number.\n\n", num2);
			fflush(stdout);
		} else if (num2 < num3) {
			printf("%i is the largest number.\n\n", num3);
			fflush(stdout);
		} else {
			printf("number2 = number 3 = largest number = %i.\n\n", num2);
			fflush(stdout);
		}
	} else {
		if (num1 > num3) {
			printf("number1 = number 2 = largest number = %i.\n\n", num1);
			fflush(stdout);
		} else if (num1 < num3) {
			printf("%i is the largest number.\n\n", num3);
			fflush(stdout);
		} else {
			printf("number1 = number2 = number 3 = %i.\n\n", num1);
			fflush(stdout);
		}
	}

	/*EX4*/
	int number = 0;
	printf("Enter a number: ");
	fflush(stdout);
	scanf(" %i", &number);
	fflush(stdin);
	if (number > 0) {
		printf("%i is positive.\n\n", number);
		fflush(stdout);
	} else if (number < 0) {
		printf("%i is negative.\n\n", number);
		fflush(stdout);
	} else {
		printf("You entered zero.\n\n");
		fflush(stdout);
	}

	/*EX5*/
	char Character = 0;
	printf("Enter a character: ");
	fflush(stdout);
	scanf(" %c", &Character);
	fflush(stdin);
	if ((Character >= 'a' && Character <= 'z')
			|| (Character >= 'A' && Character <= 'Z')) {
		printf("%c is an alphabet.\n\n", Character);
		fflush(stdout);
	} else {
		printf("%c is not an alphabet.\n\n", Character);
		fflush(stdout);
	}

	/*EX6*/
	int Int = 0;
	int counter = 0;
	int sum = 0;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf(" %i", &Int);
	fflush(stdin);
	while (counter++ < Int) {
		sum += counter;
	}
	printf("Sum = %i\n\n", sum);
	fflush(stdout);

	/*EX7*/
	float Number = 0;
	int Counter = 0;
	long unsigned int factorial = 1; /* unsigned long long didn't exist in C89 */
	printf("Enter an integer: ");
	fflush(stdout);
	scanf(" %f", &Number);
	fflush(stdin);
	if (Number < 0) {
		printf("Error! Please enter a positive integer\n\n");
		fflush(stdout);
	} else if ((Number - (int) Number) != 0) {
		printf("Error! Please enter an integer\n\n");
		fflush(stdout);
	} else {
		while (Counter++ < Number) {
			factorial *= Counter;
		}
		printf("Factorial = %lu \n\n", factorial);
		fflush(stdout);
	}

	/*EX8*/
	char operator = 0;
	int operand1 = 0;
	int operand2 = 0;
	printf("Enter an operand: ");
	fflush(stdout);
	scanf(" %c", &operator);
	fflush(stdin);
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf(" %i %i", &operand1, &operand2);
	fflush(stdin);
	switch (operator) {
	case '+':
		printf("%i + %i = %i\n\n", operand1, operand2, operand1 + operand2);
		fflush(stdout);
		break;
	case '-':
		printf("%i - %i = %i\n\n", operand1, operand2, operand1 - operand2);
		fflush(stdout);
		break;
	case '*':
		printf("%i * %i = %i\n\n", operand1, operand2, operand1 * operand2);
		fflush(stdout);
		break;
	case '/':
		if(operand2 == 0)
		{
			printf("Error, dividing by zero is not defined!");
			fflush(stdout);
			break;
		}
		else
		{
			printf("%i / %i = %i\n\n", operand1, operand2, operand1 / operand2);
			fflush(stdout);
			break;
		}
	default:
		printf("Invalid operand!\n\n");
		fflush(stdout);
		break;
	}

	return 0;
}
