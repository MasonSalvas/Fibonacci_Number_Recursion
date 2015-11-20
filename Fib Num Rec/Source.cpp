// Fibonacci number recursion.cpp : Defines the entry point for the console application.
/*
Mason Salvas
December 5, 2012

Assignment: Fibonacci Number recursion
This program will do the fibonacci sequence using recursion
*/


#include <iostream>

using namespace std;

int fibNum(int x);

int main()
{//Begin Main

	int response = 1;

	while (response == 1)					//While loop allows the user to input the program again
	{

		int answer = 0, limit = 0;

		cout << "Enter the limit that you want to go up to in the Fibonacci sequence: ";
		cin >> limit;							//enters the limit that the user wants to go to

		cout << "\n" << endl;



		answer = fibNum(limit);

		cout << "\n" << endl;
		cout << "The total in that Fibonacci Sequence is: " << answer << endl;			//displays answer
		cout << endl;

		cout << "Do you wish to run this program again? (1 for yes 0 for no): ";
		cin >> response;

		cout << endl;

	}

	return 0;
}//End Main

int fibNum(int x)
{
	if (x == 0)
	{
		return 1;
	}

	else if (x == 1)
	{
		return 1;
	}

	else
	{
		return fibNum(x - 1) + fibNum(x - 2);			//this funtion uses the recursive method
	}
}
