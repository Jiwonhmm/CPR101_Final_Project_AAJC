/*
 * CPR101 - Final Project
 * 11/28/2023
 * main.c - Main Module File
 * Runs All Module Functions
*/

/*
 * Team Members:
 * --
 * Team Leader/Conversions/Main - Adrian Curammeng (acurammeng@myseneca.ca)
 * 
 * Fundamentals - Jieweon Ham (jham10@myseneca.ca)
 * 
 * Tokenizing - Armaan Singh Kooner (askooner@myseneca.ca)
 *
 * Manipulations - Caleb Giammarresi (cgiammarresi@myseneca.ca)
*/

#define _CRT_SECURE_NO_WARNINGS

#include "fundamentals.h"
#include "manipulating.h"
#include "converting.h"
#include "tokenizing.h"

// Main Function- Runs String Module Programs
int main(void)
{
	char buff[10];  // User Selection Input

	// Runs Programs Based on User Input
	do
	{
		printf("1 - Fundamentals\n");
		printf("2 - Manipulation\n");
		printf("3 - Converting\n");
		printf("4 - Tokenizing\n");
		printf("0 - Exit\n");

		// Prompts User Selection
		printf("Which module to run? \n");
		fgets(buff, 10, stdin);

		switch (buff[0])
		{
			case '1': fundamentals();  // Version 1 - Fundamentals: Finds Character Index in String Input
				break;
			case '2': manipulating();  // Version 1 - Manipulating: Concatenates Two Input C Strings
				break;
			case '3': converting();    // Version 1 - Conversions: Converts C String Input to Integer
				break;
			case '4': tokenizing();    // Version 1 - Tokenizing: Counts Number of Words in C String Input
				break;
		}
	} while (buff[0] != '0');  // Continues Until User enters '0'

	return 0;
}
