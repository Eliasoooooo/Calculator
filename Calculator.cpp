// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
double num1, num2, result;
char op;

int main() {

	std::cout << "Enter first number :";
	std::cin >> num1;
	std::cout << "Enter an opertor (+ - * /)";
	std::cin >> op;
	std::cout << "Enter second number ";
	std::cin >> num2;

	if (op == '+')
	{
		result = num1 + num2;
	}
	else if (op == '-')
	{
		result = num1 - num2;
	}
	else if (op == '*')
	{
		result = num1 * num2;
	}
	else if (op == '/')
	{
		result = num1 / num2;
	}
	else {
		std::cout << "Invalid operator \n";
		return 1;
	}
	
	std::cout << "Result = " << result << "\n";
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
