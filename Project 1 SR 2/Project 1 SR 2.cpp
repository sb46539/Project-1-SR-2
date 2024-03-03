// This program will take a user input of an operator, and two numbers. It will then run it through an switch controlled structure before displaying the solution.

#include <iostream>

int main()
{
    char op;
    double num1;
    double num2;
    double solution;

    std::cout << "Choose an operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter a number: ";
    std::cin >> num1;

    std::cout << "Enter another number: ";
    std::cin >> num2;

    switch (op) {
    case '+':
        solution = num1 + num2;
        std::cout << num1 << " + " << num2 << " = " << solution << '\n';
        break;

    case '-':
        solution = num1 - num2;
        std::cout << num1 << " - " << num2 << " = " << solution << '\n';
        break;

    case '/':
        if (num2 != 0) {
            solution = num1 / num2;
            std::cout << num1 << " / " << num2 << " = " << solution << '\n';
        }
        else {
            std::cout << "Error: Division by zero is undefined.\n";
        }
        break;

    case '*':
        solution = num1 * num2;
        std::cout << num1 << " * " << num2 << " = " << solution << '\n';
        break;

    default:
        std::cout << "You used an invalid operator.";
        break;
    }

    return 0;
}