/*
 * Adrian Curammeng
 * Email- acurammeng@myseneca.ca
 * ID- #173513227
 *
 * CPR101 - Final Project
 * 11/28/2023
 * converting.c - Converting Module
 * C String Conversions
 * 
 * Version 1.0- C String to Integer
 * Version 2.0- C String to Double
*/

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80            // Maximum Accepted String Size

#include "converting.h"

void converting(void)
{
	/* Version 1 */

	// Converts C Strings to Integers
	char intString[BUFFER_SIZE];  // User Input string
	int intNumber;                // Integer to be Printed

	printf("*** Start of Converting Strings to int Demo ***\n");

	// Takes User Input Int Numeric String and Converts to Integers
	do
	{
		printf("Type an int numeric string (q - to quit):\n");

		// Stores User Input as C String
		fgets(intString, BUFFER_SIZE, stdin);
		intString[ strlen(intString) - 1 ] = '\0';

		// Converts String Input to Integer and Displays
		if (strcmp(intString, "q") != 0)
		{
			intNumber = atoi(intString);
			printf("Converted number is %d\n", intNumber);
		}

	} while (strcmp(intString, "q") != 0);  // Continues Until User enters 'q'

	printf("***End of Converting Strings to int Demo ***\n\n");


	/* Version 2 */

	// Converts C Strings to Integers
	char doubleString[BUFFER_SIZE];  // User Input String
	double doubleNumber;             // Double to be Printed

	printf("*** Start of Converting Strings to double Demo ***\n");

	// Takes User Input Double Numeric String and Converts to Integers
	do
	{
		printf("Type the double numeric string (q - to quit):\n");

		// Stores User Input as C String
		fgets(doubleString, BUFFER_SIZE, stdin);
		doubleString[ strlen(doubleString) - 1 ] = '\0';

		// Converts String Input to Integer and Displays
		if (strcmp(doubleString, "q") != 0)
		{
			doubleNumber = atof(doubleString);
			printf("Converted number is %f\n", doubleNumber);
		}
	} while (strcmp(doubleString, "q") != 0);  // Continues Until User enters 'q'

	printf("*** End of Converting Strings to double Demo ***\n\n");

	/* Version 3 */
	//>> insert here

}
