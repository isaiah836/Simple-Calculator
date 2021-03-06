// Assignment10.cpp : Defines the entry point for the console application.
//

//This is a calculator
//This allows the user to add,subtract, multiply, and divide 2 numbers
#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;

//Declaring functions
void addNumbers(int* pX, int* pY, int* summ);
void subNumbers(int* pX, int* pY, int* diff);
void multNumbers(int* pX, int* pY, int* product);
void divNumbers(float* pX, float* pY, float* quotient);


int main()
{
	// Initializes a variable that will control the loop
	char again = 'n';

	do
	{
		//initalize variables
		int numofProblems;

		cout << "Welcome to Simple Calculator\n\n";
		cout << "How many problems would you like me to solve?: ";
		cin >> numofProblems;
		system("cls");

		if (numofProblems != 0)
		{ 
			//this variable keeps track of the problem the program is on
			int problemNum = 1;

			for (int i = 0; i < numofProblems; ++i)
			{
				//initalize more variables
				char typeOfProblem;
				int firstNumber;
				int secondNumber;
				float divFirstNum;
				float divSecondNum;
				int summ;
				int diff;
				int product;
				float quotient;

				//Display the problem number they are on
				cout << "Problem #" << problemNum << "\n\n\n";

				//ask what type of problem they want the program to solve and makes sure the input is lower case by lowering it
				cout << "What type of problem do you want me to solve?\n  a = add\n  s = Subtract\n  m = Multiply\n  d = Divide\n-----------\n";
				cin >> typeOfProblem;
				typeOfProblem = tolower(typeOfProblem);
				system("cls");

				//These if and else statements executes certain functions based on what type of problem the user wants the program to solve.
				//Adds
				if (typeOfProblem == 'a')
				{
					cout << "Input First Number: ";
					cin >> firstNumber;

					cout << "\n\nInput Second Number: ";
					cin >> secondNumber;
					system("cls");
					addNumbers(&firstNumber, &secondNumber, &summ);

				}
				//Subtract
				else if (typeOfProblem == 's')
				{
					cout << "Input First Number: ";
					cin >> firstNumber;

					cout << "\n\nInput Second Number: ";
					cin >> secondNumber;
					system("cls");
					subNumbers(&firstNumber, &secondNumber, &diff);
				}
				//Multiply
				else if (typeOfProblem == 'm')
				{
					cout << "Input First Number: ";
					cin >> firstNumber;

					cout << "\n\nInput Second Number: ";
					cin >> secondNumber;
					system("cls");
					multNumbers(&firstNumber, &secondNumber, &product);
				}
				//Divide
				else if (typeOfProblem == 'd')
				{
					cout << "Input First Number: ";
					cin >> divFirstNum;

					cout << "\n\nInput Second Number: ";
					cin >> divSecondNum;
					system("cls");
					divNumbers(&divFirstNum, &divSecondNum, &quotient);
				}
			}

			//Asks the player if they would like to play again
			cout << "Would you like to play again?: ";
			cin >> again;
			again = tolower(again);
			system("cls");
		}
		
		//if the user wants the program to solve no problems then it quits the program
		else if (numofProblems == 0)
		{
			cout << "GoodBye.\n";
			system("pause");
			return 0;
		}
	} while (again == 'y');

	cout << "GoodBye.\n";
	system("pause");
    return 0;
}

//Adds the numbers inputed
void addNumbers(int* pX, int* pY, int* summ)
{
	*summ = *pX + *pY;
	cout << "\nThe sum is: " << *summ << "\n";
}

//Subtracts the Numbers inputed
void subNumbers(int* pX, int* pY, int* diff)
{
	if (*pX > *pY)
	{
		*diff = *pX - *pY;
		cout << "The difference is: " << *diff << "\n";
	}
	else if (*pY > *pX)
	{
		*diff = *pY - *pX;
		cout << "The difference is: " << *diff << "\n";
	}
	else
	{
		*diff = *pX - *pY;
		cout << "The difference is: " << *diff << "\n";
	}
}

//Multiplies the numbers inputed
void multNumbers(int* pX, int* pY, int* product)
{
	*product = *pX * *pY;
	cout << "The Product is : " << *product << "\n";
}

//Divides the numbers inputed
void divNumbers(float* pX, float* pY, float* quotient)
{
	*quotient = *pX / *pY;
	cout << "The quotient is : " << *quotient << "\n";
}