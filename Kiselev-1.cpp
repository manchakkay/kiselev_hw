#include <iostream>

int main()
{
    double num1, num2, result;
    char operator;

    std::cin >> num1 >> operator>> num2;

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    default:
        std::cout << "Wrong operator!";
        exit();
    }

    std::cout << "Result is " << result;

    return 0;
}